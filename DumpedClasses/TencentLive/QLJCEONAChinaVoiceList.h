//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString, QLJCEAction, QLJCEShareItem;

@interface QLJCEONAChinaVoiceList : JceObjectV2
{
    NSString *jcev2_p_0_o_type;
    NSString *jcev2_p_1_o_dataKey;
    NSArray *jcev2_p_2_o_actorInfoList__b0x9i_VOQLJCEActorInfo;
    NSString *jcev2_p_3_o_propsDataKey;
    NSString *jcev2_p_4_o_title;
    NSString *jcev2_p_5_o_subhead;
    QLJCEAction *jcev2_p_6_o_action;
    NSArray *jcev2_p_7_o_markLabelList__b0x9i_VOQLJCEMarkLabel;
    NSArray *jcev2_p_8_o_optFlags__b0x9i_VONSString;
    NSString *jcev2_p_9_o_unit;
    NSString *jcev2_p_10_o_desc;
    QLJCEShareItem *jcev2_p_11_o_shareItem;
    NSString *jcev2_p_12_o_reportParams;
    NSArray *jcev2_p_13_o_blackList__b0x9i_VONSString;
    NSString *jcev2_p_14_o_reportKey;
    NSArray *jcev2_p_15_o_groupSizeList__b0x9i_VONSNumber;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_groupSizeList, setter=setJce_groupSizeList:) NSArray *jcev2_p_15_o_groupSizeList__b0x9i_VONSNumber; // @synthesize jcev2_p_15_o_groupSizeList__b0x9i_VONSNumber;
@property(retain, nonatomic, getter=jce_reportKey, setter=setJce_reportKey:) NSString *jcev2_p_14_o_reportKey; // @synthesize jcev2_p_14_o_reportKey;
@property(retain, nonatomic, getter=jce_blackList, setter=setJce_blackList:) NSArray *jcev2_p_13_o_blackList__b0x9i_VONSString; // @synthesize jcev2_p_13_o_blackList__b0x9i_VONSString;
@property(retain, nonatomic, getter=jce_reportParams, setter=setJce_reportParams:) NSString *jcev2_p_12_o_reportParams; // @synthesize jcev2_p_12_o_reportParams;
@property(retain, nonatomic, getter=jce_shareItem, setter=setJce_shareItem:) QLJCEShareItem *jcev2_p_11_o_shareItem; // @synthesize jcev2_p_11_o_shareItem;
@property(retain, nonatomic, getter=jce_desc, setter=setJce_desc:) NSString *jcev2_p_10_o_desc; // @synthesize jcev2_p_10_o_desc;
@property(retain, nonatomic, getter=jce_unit, setter=setJce_unit:) NSString *jcev2_p_9_o_unit; // @synthesize jcev2_p_9_o_unit;
@property(retain, nonatomic, getter=jce_optFlags, setter=setJce_optFlags:) NSArray *jcev2_p_8_o_optFlags__b0x9i_VONSString; // @synthesize jcev2_p_8_o_optFlags__b0x9i_VONSString;
@property(retain, nonatomic, getter=jce_markLabelList, setter=setJce_markLabelList:) NSArray *jcev2_p_7_o_markLabelList__b0x9i_VOQLJCEMarkLabel; // @synthesize jcev2_p_7_o_markLabelList__b0x9i_VOQLJCEMarkLabel;
@property(retain, nonatomic, getter=jce_action, setter=setJce_action:) QLJCEAction *jcev2_p_6_o_action; // @synthesize jcev2_p_6_o_action;
@property(retain, nonatomic, getter=jce_subhead, setter=setJce_subhead:) NSString *jcev2_p_5_o_subhead; // @synthesize jcev2_p_5_o_subhead;
@property(retain, nonatomic, getter=jce_title, setter=setJce_title:) NSString *jcev2_p_4_o_title; // @synthesize jcev2_p_4_o_title;
@property(retain, nonatomic, getter=jce_propsDataKey, setter=setJce_propsDataKey:) NSString *jcev2_p_3_o_propsDataKey; // @synthesize jcev2_p_3_o_propsDataKey;
@property(retain, nonatomic, getter=jce_actorInfoList, setter=setJce_actorInfoList:) NSArray *jcev2_p_2_o_actorInfoList__b0x9i_VOQLJCEActorInfo; // @synthesize jcev2_p_2_o_actorInfoList__b0x9i_VOQLJCEActorInfo;
@property(retain, nonatomic, getter=jce_dataKey, setter=setJce_dataKey:) NSString *jcev2_p_1_o_dataKey; // @synthesize jcev2_p_1_o_dataKey;
@property(retain, nonatomic, getter=jce_type, setter=setJce_type:) NSString *jcev2_p_0_o_type; // @synthesize jcev2_p_0_o_type;
- (void).cxx_destruct;
- (id)init;

@end

