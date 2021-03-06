//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSHashTable, NSString;

@interface QQGroupFileLocalThumnailGenerateOperation : NSOperation
{
    NSHashTable *_handlers;
    NSString *_localPath;
    unsigned long long _previewType;
}

+ (id)operationWithLocalPath:(id)arg1 previewType:(unsigned long long)arg2;
+ (id)queue;
- (void).cxx_destruct;
- (void)main;
- (id)generatePreviewImageFromOriginalImage:(id)arg1;
- (void)subscriptFinishHandler:(id)arg1;
- (double)widthOfPreviewType;
- (id)initWithLocalPath:(id)arg1 previewType:(unsigned long long)arg2;

@end

