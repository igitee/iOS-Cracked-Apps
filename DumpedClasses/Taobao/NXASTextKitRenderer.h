//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NXASTextKitContext, NXASTextKitShadower;

@interface NXASTextKitRenderer : NSObject
{
    struct CGSize _calculatedSize;
    NXASTextKitContext *_context;
    id <NXASTextKitTruncating> _truncater;
    NXASTextKitShadower *_shadower;
    struct CGSize _constrainedSize;
    struct UIEdgeInsets _contentInsets;
    struct NXASTextKitAttributes _attributes;
}

@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(readonly, nonatomic) struct CGSize constrainedSize; // @synthesize constrainedSize=_constrainedSize;
@property(readonly, nonatomic) struct NXASTextKitAttributes attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) NXASTextKitShadower *shadower; // @synthesize shadower=_shadower;
@property(readonly, nonatomic) id <NXASTextKitTruncating> truncater; // @synthesize truncater=_truncater;
@property(readonly, nonatomic) NXASTextKitContext *context; // @synthesize context=_context;
- (id).cxx_construct;
- (void).cxx_destruct;
- (vector_d5f79a51)visibleRanges;
- (unsigned long long)lineCount;
- (void)drawInContext:(struct CGContext *)arg1 bounds:(struct CGRect)arg2;
- (struct CGSize)size;
- (void)_calculateSize;
- (id)initWithTextKitAttributes:(const struct NXASTextKitAttributes *)arg1 constrainedSize:(struct CGSize)arg2;
- (struct CGRect)frameForTextRange:(struct _NSRange)arg1;
- (struct CGRect)trailingRect;
- (void)enumerateTextIndexesAtPosition:(struct CGPoint)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct CGRect)_internalRectForGlyphAtIndex:(unsigned long long)arg1 measureOption:(unsigned long long)arg2 layoutManager:(id)arg3 textContainer:(id)arg4 textStorage:(id)arg5;
- (unsigned long long)nearestTextIndexAtPosition:(struct CGPoint)arg1;
- (id)rectsForTextRange:(struct _NSRange)arg1 measureOption:(unsigned long long)arg2;

@end
