//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ACDSTQLCostInfo : NSObject
{
    int _strategy;
    NSString *_tqlType;
    double _start;
    double _total;
    double _merge;
    double _sync;
    double _net;
}

@property(nonatomic) double net; // @synthesize net=_net;
@property(nonatomic) double sync; // @synthesize sync=_sync;
@property(nonatomic) double merge; // @synthesize merge=_merge;
@property(nonatomic) double total; // @synthesize total=_total;
@property(nonatomic) double start; // @synthesize start=_start;
@property(nonatomic) int strategy; // @synthesize strategy=_strategy;
@property(retain, nonatomic) NSString *tqlType; // @synthesize tqlType=_tqlType;
- (void).cxx_destruct;
- (id)init;

@end
