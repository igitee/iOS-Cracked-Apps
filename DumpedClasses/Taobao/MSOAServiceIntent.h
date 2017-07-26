//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface MSOAServiceIntent : NSObject
{
    NSString *_strictServiceId;
    NSString *_strictSourceId;
    NSString *_universalToken;
    double _requestStartTime;
    double _requestEndTime;
    NSMutableDictionary *_UTArgs;
    NSString *_serviceId;
    NSString *_version;
    NSString *_bizName;
    NSString *_sceneName;
    NSDictionary *_params;
}

@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *sceneName; // @synthesize sceneName=_sceneName;
@property(retain, nonatomic) NSString *bizName; // @synthesize bizName=_bizName;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *serviceId; // @synthesize serviceId=_serviceId;
- (void).cxx_destruct;
- (id)initWithServiceId:(id)arg1 version:(id)arg2 bizName:(id)arg3;
- (id)generateUTArgs;
- (double)performanceRecordEnd;
- (void)performanceRecordStart;
- (CDUnknownBlockType)failureHandler;
- (CDUnknownBlockType)successHandler;
- (id)strictSourceId;
- (id)strictServiceId;
- (id)uniqueToken;

@end
