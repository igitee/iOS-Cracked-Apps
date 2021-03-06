//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, NSURLSessionDownloadTask;

@interface TADDownloadTask2 : NSObject
{
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    NSDate *_startDate;
    NSURLSessionDownloadTask *_downloadTask;
    NSString *_baseDir;
    NSString *_md5;
}

@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(copy, nonatomic) NSString *baseDir; // @synthesize baseDir=_baseDir;
@property(retain, nonatomic) NSURLSessionDownloadTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithDownloadTask:(id)arg1 baseDir:(id)arg2 md5:(id)arg3 progressBlock:(CDUnknownBlockType)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;

@end

