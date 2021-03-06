//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSNumber, NSString;

@interface NVMMessage : NVMModel
{
    _Bool _hasRead;
    NSString *_messageID;
    NSString *_iconURL;
    NSString *_title;
    NSString *_content;
    NSString *_time;
    NSString *_actionURL;
    NSNumber *_taskID;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool hasRead; // @synthesize hasRead=_hasRead;
@property(copy, nonatomic) NSNumber *taskID; // @synthesize taskID=_taskID;
@property(copy, nonatomic) NSString *actionURL; // @synthesize actionURL=_actionURL;
@property(copy, nonatomic) NSString *time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
@property(copy, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
- (void).cxx_destruct;

@end

