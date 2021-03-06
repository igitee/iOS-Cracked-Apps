//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDBDao.h"

@interface CloudFavoriteDBDao : BaseDBDao
{
}

- (id)resultToCloudFileEntity:(id)arg1;
- (id)resultToCloudListEntity:(id)arg1;
- (id)createInserCloudFileSQLWithCloudFileEntity:(id)arg1;
- (_Bool)isDelStatusOfFileID:(unsigned long long)arg1 AndListRowID:(unsigned long long)arg2 AndUserID:(id)arg3;
- (_Bool)isDelStatusOfListID:(unsigned long long)arg1 AndUserID:(id)arg2;
- (id)queryCollectEntityList:(id)arg1 andUserID:(id)arg2;
- (_Bool)songExistInCollectListId:(unsigned long long)arg1 songInfo:(id)arg2;
- (_Bool)deleteDuplicationRecords;
- (_Bool)deleteMsuicNotInAllMusic;
- (id)getFileEntityWithRowID:(unsigned long long)arg1;
- (id)getFileEntityWithListRowId:(unsigned long long)arg1 AndFilePath:(id)arg2;
- (id)getFileEntityWithListRowId:(unsigned long long)arg1 AndFileHash:(id)arg2;
- (id)getFileEntityWithListRowId:(unsigned long long)arg1 AndFileID:(unsigned int)arg2;
- (id)getFileEntity:(id)arg1;
- (unsigned int)getMinListFMVersionWithListRowID:(unsigned long long)arg1;
- (id)queryNotDelFileEntitysOrderByFileId:(unsigned long long)arg1;
- (id)queryNotDelFileEntitys:(unsigned long long)arg1;
- (id)queryFileEntitiesWithRowIds:(id)arg1;
- (id)queryUploadFilesWithListRowId:(unsigned long long)arg1;
- (id)queryAllFileEntitys:(unsigned long long)arg1;
- (id)queryFilesEntitysInRowIds:(id)arg1;
- (id)queryFilesEntitysWithListRowID:(unsigned long long)arg1 notInFileIDs:(id)arg2;
- (void)deleteHasUploadFilesEntity:(id)arg1 AndError:(id *)arg2;
- (void)deleteFileEntityThrowDBException:(id)arg1 AndError:(id *)arg2;
- (void)deleteFileEntities:(id)arg1 AndError:(id *)arg2;
- (void)deleteHasUploadFilesThrowDBExceptionWithListRowID:(unsigned long long)arg1 notInFileIDs:(id)arg2 AndError:(id *)arg3;
- (id)queryHasUploadListsWithUserID:(id)arg1 notInListIDs:(id)arg2;
- (void)deleteFileEntityThrowDBExceptionWithRowID:(unsigned long long)arg1 AndError:(id *)arg2;
- (void)deleteFileEntityThrowDBExceptionWithListRowID:(unsigned long long)arg1 AndError:(id *)arg2;
- (_Bool)resetLmVersion;
- (unsigned long long)getUsedTotalCountWithUserID:(id)arg1;
- (long long)getUsedTotalSizeWithUserID:(id)arg1;
- (void)addFileEntitysNoVerifyThrowDBException:(id)arg1 AndError:(id *)arg2;
- (id)addFileEntityNoVerifyThrowDBException:(id)arg1 AndError:(id *)arg2;
- (void)updateFilesWeight:(id)arg1 AndError:(id *)arg2;
- (void)increaseOrderWeightWithListWithUerId:(id)arg1 listType:(int)arg2;
- (void)increaseSongsWeight:(unsigned long long)arg1 ForList:(id)arg2 AndError:(id *)arg3;
- (id)updateFileEntityThrowDBException:(id)arg1 AndError:(id *)arg2;
- (void)updateFileEntities:(id)arg1 AndError:(id *)arg2;
- (void)updateFileListsThrowDBException:(id)arg1 AndOpType:(int)arg2 AndError:(id *)arg3;
- (void)updateFilesListIDThrowDBException:(unsigned int)arg1 equalListRowID:(unsigned long long)arg2 AndError:(id *)arg3;
- (id)addFileEntityThrowDBException:(id)arg1 AndError:(id *)arg2;
- (id)getListEntity:(unsigned long long)arg1;
- (id)queryListEntitys:(id)arg1 AndInListNames:(id)arg2;
- (id)queryListEntitys:(id)arg1 AndNotInListNames:(id)arg2;
- (id)getListEntityWithUserID:(id)arg1 AndListName:(id)arg2;
- (id)getListEntityWithOid:(unsigned int)arg1 AndOrid:(unsigned int)arg2 AndUserID:(id)arg3;
- (id)getListEntityWithAid:(unsigned int)arg1 AndUserID:(id)arg2;
- (id)getListEntityWithUserID:(id)arg1 AndListID:(unsigned int)arg2;
- (id)queryAllListEntitys:(id)arg1;
- (id)queryListEntitys:(id)arg1;
- (void)deleteAllCloudListsAndFiles;
- (void)delListEntityThrowDBExceptionWithRowID:(unsigned long long)arg1 AndError:(id *)arg2;
- (id)delListEntityThrowDBException:(id)arg1 AndError:(id *)arg2;
- (void)sortListEntityWithEntity:(id)arg1 sortList:(id)arg2 sortType:(unsigned long long)arg3 AndError:(id *)arg4;
- (_Bool)updateWeightWithCollectList:(id)arg1;
- (_Bool)updateWeightAndOpTypeWithCollectList:(id)arg1;
- (id)updateListEntityNoVerifyThrowDBException:(id)arg1 AndError:(id *)arg2;
- (id)updateListEntityThrowDBException:(id)arg1 AndError:(id *)arg2;
- (id)addListEntityThrowDBException:(id)arg1 AndError:(id *)arg2;
- (id)addListEntityNoVerifyThrowDBException:(id)arg1 AndError:(id *)arg2;
- (id)init;

@end

