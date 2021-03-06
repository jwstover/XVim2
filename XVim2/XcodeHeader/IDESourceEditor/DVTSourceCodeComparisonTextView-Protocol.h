//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESourceEditor/NSObject-Protocol.h>

@class NSColor, NSScrollView;

@protocol DVTSourceCodeComparisonTextView <NSObject>
@property(nonatomic, readonly) double defaultLineHeight;
@property(nonatomic, readonly) unsigned long long numberOfLines;
@property(nonatomic, readonly) NSColor *backgroundColor;
- (void)getParagraphRect:(struct CGRect *)arg1 firstLineRect:(struct CGRect *)arg2 forLineRange:(struct _NSRange)arg3 ensureLayout:(BOOL)arg4;
- (struct _NSRange)visibleParagraphRange;
- (double)fmc_startOfLine:(long long)arg1;
- (long long)fmc_lineNumberForPosition:(double)arg1;

@optional
- (BOOL)scrollToRange:(struct _NSRange)arg1;
@property(nonatomic) BOOL postsLayoutManagerNotifications;
- (void)scrollViewDidSetFrameSize:(NSScrollView *)arg1;
- (void)ensureLayoutForCharacterRange:(struct _NSRange)arg1;
- (struct _NSRange)characterRangeForLineRange:(struct _NSRange)arg1;
@end

