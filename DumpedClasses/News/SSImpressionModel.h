//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface SSImpressionModel : NSObject <NSCoding>
{
    double _totalDuration;
    long long _impressionStatus;
    NSString *_itemID;
    unsigned long long _itemType;
    NSString *_value;
    unsigned long long _cellStyle;
    unsigned long long _cellSubStyle;
    NSString *_actionType;
    double _startTime;
    double _latelyStartTime;
    double _onceMaxDuration;
    NSString *_modelPrimaryKey;
    double _latelyPauseStartTime;
}

+ (id)genImpressionModelPrimaryKeyForItemID:(id)arg1 itemType:(unsigned long long)arg2;
+ (unsigned long long)sendCodeForImpressionModelType:(unsigned long long)arg1;
@property(nonatomic) double latelyPauseStartTime; // @synthesize latelyPauseStartTime=_latelyPauseStartTime;
@property(retain, nonatomic) NSString *modelPrimaryKey; // @synthesize modelPrimaryKey=_modelPrimaryKey;
@property(nonatomic) double onceMaxDuration; // @synthesize onceMaxDuration=_onceMaxDuration;
@property(nonatomic) double latelyStartTime; // @synthesize latelyStartTime=_latelyStartTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(nonatomic) unsigned long long cellSubStyle; // @synthesize cellSubStyle=_cellSubStyle;
@property(nonatomic) unsigned long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(nonatomic) long long impressionStatus; // @synthesize impressionStatus=_impressionStatus;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
- (void).cxx_destruct;
- (id)primaryKey;
- (void)suspendRecoderInterval:(double)arg1;
- (void)startRecoderInterval:(double)arg1;
- (void)endRecoderInterval:(double)arg1;
- (id)parseToDict:(double)arg1;
- (void)reuseImpressionModel:(double)arg1;
- (void)setImpressionParams:(id)arg1;
- (void)clearRecord;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithItemID:(id)arg1 itemType:(unsigned long long)arg2;

@end

