//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

#import <IDEKit/NSStackViewDelegate-Protocol.h>

@class NSButton, NSLayoutConstraint, NSStackView, NSTextField, _TtC6IDEKit18TrainyardTrackView, _TtC6IDEKit19TrainyardLabelField, _TtC6IDEKit32IDESourceControlMessageFieldView;

@interface _TtC6IDEKit22TrainyardTableCellView : NSTableCellView <NSStackViewDelegate>
{
    // Error parsing type: , name: authorField
    // Error parsing type: , name: revisionField
    // Error parsing type: , name: tagsView
    // Error parsing type: , name: moreButton
    // Error parsing type: , name: messageField
    // Error parsing type: , name: toolTipMessageField
    // Error parsing type: , name: dateField
    // Error parsing type: , name: trackView
    // Error parsing type: , name: leadingConstraint
    // Error parsing type: , name: middleConstraint
    // Error parsing type: , name: messageConstraint
    // Error parsing type: , name: delegate
    // Error parsing type: , name: $__lazy_storage_$_trainyardEnabled
    // Error parsing type: , name: leadingConstraintConstantWithoutTrainyard
    // Error parsing type: , name: leadingConstraintConstantWithTrainyard
    // Error parsing type: , name: authorImageToken
    // Error parsing type: , name: isTrainyardViewHidden
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;
- (void)toggleMergeDisplay:(id)arg1;
- (void)showMore:(id)arg1;
@property(nonatomic, copy) id objectValue;
@property(nonatomic) long long backgroundStyle;
@property(nonatomic) __weak NSLayoutConstraint *messageConstraint; // @synthesize messageConstraint;
@property(nonatomic) __weak NSLayoutConstraint *middleConstraint; // @synthesize middleConstraint;
@property(nonatomic) __weak NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint;
@property(nonatomic) __weak _TtC6IDEKit18TrainyardTrackView *trackView; // @synthesize trackView;
@property(nonatomic) __weak NSTextField *dateField; // @synthesize dateField;
@property(nonatomic) __weak NSTextField *toolTipMessageField; // @synthesize toolTipMessageField;
@property(nonatomic) __weak _TtC6IDEKit32IDESourceControlMessageFieldView *messageField; // @synthesize messageField;
@property(nonatomic, retain) NSButton *moreButton; // @synthesize moreButton;
@property(nonatomic) __weak NSStackView *tagsView; // @synthesize tagsView;
@property(nonatomic) __weak _TtC6IDEKit19TrainyardLabelField *revisionField; // @synthesize revisionField;
@property(nonatomic) __weak NSTextField *authorField; // @synthesize authorField;

@end

