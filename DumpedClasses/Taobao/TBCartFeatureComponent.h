//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBCartFeatureComponent.h"

@class NSMutableDictionary, NSString;

@interface TBCartFeatureComponent : NSObject <TBCartFeatureComponent>
{
    NSMutableDictionary *_data;
}

@property(retain, nonatomic) NSMutableDictionary *data; // @synthesize data=_data;
- (void).cxx_destruct;
@property(nonatomic, getter=isGzip) _Bool gzip;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
