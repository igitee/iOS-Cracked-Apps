//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

@class UIColor;

@interface TTRealnameAuthProgressLineView : SSThemedView
{
    double _percent;
    UIColor *_leftColor;
    UIColor *_processColor;
}

@property(retain, nonatomic) UIColor *processColor; // @synthesize processColor=_processColor;
@property(retain, nonatomic) UIColor *leftColor; // @synthesize leftColor=_leftColor;
@property(nonatomic) double percent; // @synthesize percent=_percent;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

