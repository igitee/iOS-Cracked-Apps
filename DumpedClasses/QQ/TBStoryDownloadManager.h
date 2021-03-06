//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBBizNetworkLogicDelegate.h"

@class NSDate, NSFileManager, NSMutableArray, NSString, QQLockDictionary;

@interface TBStoryDownloadManager : NSObject <TBBizNetworkLogicDelegate>
{
    _Bool _isCapturing;
    _Bool _isStoryMainPage;
    int _preDownloadSetting;
    NSFileManager *_fileManager;
    QQLockDictionary *_updatingQueue;
    QQLockDictionary *_callBackTree;
    unsigned long long _preloadCountForWWAN;
    unsigned long long _preloadFriendCount;
    NSDate *_downloadPathLastClearDate;
    NSDate *_myStoryPathLastClearDate;
    unsigned long long _myVideoCacheMaxCount;
    unsigned long long _myVideoCacheNormalCount;
    unsigned long long _downloadVideoCacheMaxCount;
    unsigned long long _downloadVideoCacheNormalCount;
    unsigned long long _clearRate;
    QQLockDictionary *_groupAIOVideoCbDic;
    NSMutableArray *_preloadVidListCache;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isStoryMainPage; // @synthesize isStoryMainPage=_isStoryMainPage;
@property(retain, nonatomic) NSMutableArray *preloadVidListCache; // @synthesize preloadVidListCache=_preloadVidListCache;
@property(retain, nonatomic) QQLockDictionary *groupAIOVideoCbDic; // @synthesize groupAIOVideoCbDic=_groupAIOVideoCbDic;
@property(nonatomic) unsigned long long clearRate; // @synthesize clearRate=_clearRate;
@property(nonatomic) unsigned long long downloadVideoCacheNormalCount; // @synthesize downloadVideoCacheNormalCount=_downloadVideoCacheNormalCount;
@property(nonatomic) unsigned long long downloadVideoCacheMaxCount; // @synthesize downloadVideoCacheMaxCount=_downloadVideoCacheMaxCount;
@property(nonatomic) unsigned long long myVideoCacheNormalCount; // @synthesize myVideoCacheNormalCount=_myVideoCacheNormalCount;
@property(nonatomic) unsigned long long myVideoCacheMaxCount; // @synthesize myVideoCacheMaxCount=_myVideoCacheMaxCount;
@property(retain, nonatomic) NSDate *myStoryPathLastClearDate; // @synthesize myStoryPathLastClearDate=_myStoryPathLastClearDate;
@property(retain, nonatomic) NSDate *downloadPathLastClearDate; // @synthesize downloadPathLastClearDate=_downloadPathLastClearDate;
@property(nonatomic) _Bool isCapturing; // @synthesize isCapturing=_isCapturing;
@property(nonatomic) unsigned long long preloadFriendCount; // @synthesize preloadFriendCount=_preloadFriendCount;
@property(nonatomic) unsigned long long preloadCountForWWAN; // @synthesize preloadCountForWWAN=_preloadCountForWWAN;
@property(retain, nonatomic) QQLockDictionary *callBackTree; // @synthesize callBackTree=_callBackTree;
@property(retain, nonatomic) QQLockDictionary *updatingQueue; // @synthesize updatingQueue=_updatingQueue;
@property(retain) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(nonatomic) int preDownloadSetting; // @synthesize preDownloadSetting=_preDownloadSetting;
- (id)errorForDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
- (void)handleGroupAIOVideoMsgStateNotification:(id)arg1;
- (void)groupStoryVideoFromModel:(id)arg1 isLocalPlay:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
- (void)removeCbForUUid:(id)arg1;
- (CDUnknownBlockType)gCbForUUid:(id)arg1;
- (void)addCallback:(CDUnknownBlockType)arg1 forUUid:(id)arg2;
- (void)handleQQStoryVideoEndRecordNotification:(id)arg1;
- (void)handleQQStoryVideoStartRecordNotification:(id)arg1;
- (void)handleQQAccountLogoutNotification:(id)arg1;
- (void)getDoodleImage:(id)arg1 image:(CDUnknownBlockType)arg2;
- (_Bool)getTempFile:(id)arg1 endFile:(id)arg2 endFileSize:(unsigned long long)arg3;
- (void)downloadFilePart:(id)arg1 destination:(id)arg2 httpRange:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)moveEndFileToFrontWithTempFile:(id)arg1 endFile:(id)arg2 model:(id)arg3 localPath:(id)arg4 endOffset:(unsigned long long)arg5 tempFileSize:(unsigned long long)arg6 callback:(CDUnknownBlockType)arg7;
- (void)checkMoovBoxWithTempFile:(id)arg1 localPath:(id)arg2 endFile:(id)arg3 videoModel:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)checkTempFileSteamingStroyVideoModel:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (_Bool)checkTaskDownloadingState:(id)arg1;
- (void)playStroyVideoModel:(id)arg1 isLocalPlay:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
- (void)downloadPlayingStoryVideosWithDesModel:(id)arg1 params:(id)arg2;
- (void)callBackToObservers:(id)arg1 filePath:(id)arg2 doodleImage:(id)arg3 resouerLoader:(id)arg4 error:(id)arg5;
- (id)popCallbackTree:(id)arg1;
- (void)pushCallbackTree:(id)arg1 callback:(CDUnknownBlockType)arg2 model:(id)arg3;
- (void)setBusiness:(id)arg1 task:(id)arg2 isCurrentlyUpdating:(_Bool)arg3;
- (_Bool)isCurrentlyUpdating:(id)arg1;
- (void)refreshTaskEndFileParams:(id)arg1 endFile:(id)arg2 tempFile:(id)arg3;
- (void)reportDownloadTaskFailed:(id)arg1 vid:(id)arg2 error:(id)arg3;
- (void)reportDownloadTaskSuccess:(id)arg1 vid:(id)arg2 source:(int)arg3;
- (id)getStroyVideoDownloadTaskList:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)downloadStroyVideoList:(id)arg1 priority:(int)arg2 style:(int)arg3 callback:(CDUnknownBlockType)arg4;
- (void)downloadStoryVideoWithDesModel:(id)arg1 priority:(int)arg2 style:(int)arg3 params:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)downloadStoryVideoWithDesModel:(id)arg1 priority:(int)arg2 style:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)freeDiskSpaceCheck:(unsigned long long)arg1 remindSpace:(unsigned long long)arg2 shouldShowAlert:(_Bool)arg3;
- (void)closeStoryViewController;
- (void)dealloc;
- (id)shareClearCacheQueue;
- (id)shareDownloadQueue;
- (id)init;
- (id)p_uniqueVideoEffectTempPath;
- (void)p_addStoryWatermarkToVideo:(id)arg1 watermarkImage:(id)arg2 outputPath:(id)arg3 tempPath:(id)arg4 isImage:(_Bool)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;
- (void)p_mergeStoryVideosAndExportWithUniqueTempPath:(id)arg1 isImage:(_Bool)arg2 waterMaskImage:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)p_addOverLayToVideo:(id)arg1 doodleImage:(id)arg2 finalVideoPath:(id)arg3 countModel:(id)arg4 uniqueTempPath:(id)arg5 tempVideoUrl:(id)arg6 isImage:(_Bool)arg7 waterMaskImage:(id)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (void)p_videoProcessingFilePath:(id)arg1 model:(id)arg2 doodleImage:(id)arg3 uniqueTempPath:(id)arg4 countModel:(id)arg5 isImage:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (id)p_waterMaskImageForVideoModel:(id)arg1;
- (void)p_exportStoryAssetWithDesModelList:(id)arg1 isImage:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)exportStoryAssetWithDesModel:(id)arg1 isPicture:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)exportStoryAssetsWithDesModelList:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)preDownloadCachePathForVideoId:(id)arg1 withPatch:(id)arg2;
- (id)localPathForVideoId:(id)arg1 withPatch:(id)arg2;
- (id)md5sumWithStr:(id)arg1;
- (id)createTmpDirectory:(id)arg1;
- (id)createMyStoryHDDirectory;
- (id)createDownloadDirectory;
- (void)deleteMyVideoFileWithVideoIdAry:(id)arg1;
- (_Bool)deleteVideoFileWithVideoId:(id)arg1;
- (_Bool)copyImageFromPath:(id)arg1 toURL:(id)arg2;
- (_Bool)copyItemFromPath:(id)arg1 toVideoId:(id)arg2;
- (_Bool)checkIfVideoListExistInLocal:(id)arg1;
- (void)checkVideosCache:(id)arg1 maxCount:(unsigned long long)arg2 normalCount:(unsigned long long)arg3 sortType:(int)arg4;
- (void)checkMyStoryVideosCache;
- (void)checkDownloadVideosCache;
- (void)clearMyStoryDirectoryMemoryFullFiles;
- (void)clearDownloadDirectoryMemoryFullFiles;
- (void)clearMemoryFullFiles;
- (void)loadCacheManageConfig;
- (id)getVidListForRequestVideoInfo:(id)arg1;
- (void)startPreloadDownload:(id)arg1;
- (unsigned long long)getPreloadCountForWWAN;
- (void)handleMSFNetworkApnStateNotification:(id)arg1;
- (void)restorePreloadRequestStatus;
- (_Bool)isWifiNetWork;
- (void)didRequestFail:(unsigned long long)arg1 requestModel:(id)arg2 error:(id)arg3;
- (void)didReceivedData:(unsigned long long)arg1 requestModel:(id)arg2 classModel:(id)arg3;
- (void)preloadAfterFeedsVideo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

