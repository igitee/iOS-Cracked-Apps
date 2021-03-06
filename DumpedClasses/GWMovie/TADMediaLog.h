//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TADReportBase-Protocol.h"

@class NSDictionary, NSException, NSMutableDictionary, NSString;

@interface TADMediaLog : NSObject <TADReportBase>
{
    _Bool _isSkiped;
    double _start;
    double _end;
    long long _vidToAid;
    long long _aidToOid;
    long long _oidToUrl;
    long long _oidToImg;
    NSString *_vurl;
    long long _val1;
    long long _val2;
    NSString *_vid;
    NSString *_dtype;
    NSString *_requestID;
    NSDictionary *_appExtParam;
    long long _errorCode;
    NSException *_exception;
    NSMutableDictionary *_mediaLog;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *mediaLog; // @synthesize mediaLog=_mediaLog;
@property(retain, nonatomic) NSException *exception; // @synthesize exception=_exception;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) _Bool isSkiped; // @synthesize isSkiped=_isSkiped;
@property(retain, nonatomic) NSDictionary *appExtParam; // @synthesize appExtParam=_appExtParam;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(retain, nonatomic) NSString *dtype; // @synthesize dtype=_dtype;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(nonatomic) long long val2; // @synthesize val2=_val2;
@property(nonatomic) long long val1; // @synthesize val1=_val1;
@property(retain, nonatomic) NSString *vurl; // @synthesize vurl=_vurl;
@property(nonatomic) long long oidToImg; // @synthesize oidToImg=_oidToImg;
@property(nonatomic) long long oidToUrl; // @synthesize oidToUrl=_oidToUrl;
@property(nonatomic) long long aidToOid; // @synthesize aidToOid=_aidToOid;
@property(nonatomic) long long vidToAid; // @synthesize vidToAid=_vidToAid;
@property(nonatomic) double end; // @synthesize end=_end;
@property(nonatomic) double start; // @synthesize start=_start;
- (id)dataDictWithKey;
- (void)dealloc;
- (void)setTrueViewErrorcode:(long long)arg1;
- (void)setTrueView:(id)arg1 forKey:(id)arg2;
- (void)setAdSelector:(id)arg1 forKey:(id)arg2;
- (id)getMutableDictionaryIn:(id)arg1 forKey:(id)arg2;
- (void)addOid:(long long)arg1;
- (void)addVid:(id)arg1;
- (void)addPageLoadCost:(long long)arg1;
- (void)addLandingPage:(long long)arg1;
- (void)addLandingPoint:(long long)arg1;
- (void)addRealPlayed:(long long)arg1;
- (void)addTotalPlayed:(long long)arg1;
- (void)setLive:(id)arg1;
- (void)setLivePid:(id)arg1;
- (void)setPu:(id)arg1;
- (void)setFirstBufferingTime:(long long)arg1;
- (void)setSoid:(id)arg1;
- (void)setOffline:(id)arg1;
- (void)setAdaptor:(id)arg1;
- (void)setMerged:(id)arg1;
- (void)setMvid:(id)arg1;
- (void)setAdid:(id)arg1;
- (void)setTpid:(id)arg1;
- (void)setCid:(id)arg1;
- (void)setVideoDuration:(long long)arg1;
- (void)setAdType:(id)arg1;
- (void)appendString:(id)arg1 toKey:(id)arg2;
- (void)appendValue:(long long)arg1 toKey:(id)arg2;
- (id)getVmindLog;
- (void)reset;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

