//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditor.h>

@class DVTBorderedView, DVTScopeBarButton, NSButton, NSLayoutConstraint, NSProgressIndicator, NSScrollView, NSStackView, _TtC15IDESourceEditor18CodeRollLoadingRow;

__attribute__((visibility("hidden")))
@interface _TtC15IDESourceEditor14CodeRollEditor : IDEEditor
{
    // Error parsing type: , name: scrollView
    // Error parsing type: , name: stackView
    // Error parsing type: , name: topBarBorderedView
    // Error parsing type: , name: okButton
    // Error parsing type: , name: cancelButton
    // Error parsing type: , name: progressIndicator
    // Error parsing type: , name: topBarLayoutConstraint
    // Error parsing type: , name: trailingDividerView
    // Error parsing type: , name: $__lazy_storage_$_effectiveTheme
    // Error parsing type: , name: allScopeButton
    // Error parsing type: , name: codeScopeButton
    // Error parsing type: , name: fileNamesScopeButton
    // Error parsing type: , name: commentsScopeButton
    // Error parsing type: , name: stringsScopeButton
    // Error parsing type: , name: otherScopeButton
    // Error parsing type: , name: categoryCounts
    // Error parsing type: , name: filterState
    // Error parsing type: , name: codeRollViewControllers
    // Error parsing type: , name: originalText
    // Error parsing type: , name: renameObserver
    // Error parsing type: , name: renameFailedObserver
    // Error parsing type: , name: loadingRow
    // Error parsing type: , name: entryAnimationCompleted
    // Error parsing type: , name: firstDocumentAnimationCompleted
    // Error parsing type: , name: savedResults
    // Error parsing type: , name: primaryRangeKind
    // Error parsing type: , name: primaryArgIndex
    // Error parsing type: , name: primaryRangeIndex
    // Error parsing type: , name: $__lazy_storage_$_renameRules
    // Error parsing type: , name: renameRulesQueue
    // Error parsing type: , name: originalNamePieces
    // Error parsing type: , name: currentSwiftRules
    // Error parsing type: , name: currentObjCRules
    // Error parsing type: , name: currentNamePieces
    // Error parsing type: , name: crossLanguageRulesAreSet
    // Error parsing type: , name: resultsLoadingState
    // Error parsing type: , name: fileViewsToReveal
    // Error parsing type: , name: currentFile
}

+ (id)defaultViewNibName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;
- (void)selectDocumentLocations:(id)arg1;
- (id)currentSelectedItems;
- (void)shouldNavigateAway:(CDUnknownBlockType)arg1;
- (void)filtersChanged:(id)arg1;
- (void)finishRename:(id)arg1;
- (void)cancelRename:(id)arg1;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)viewDidLoad;
@property(nonatomic, retain) _TtC15IDESourceEditor18CodeRollLoadingRow *loadingRow; // @synthesize loadingRow;
- (void)primitiveInvalidate;
@property(nonatomic) __weak DVTScopeBarButton *otherScopeButton; // @synthesize otherScopeButton;
@property(nonatomic) __weak DVTScopeBarButton *stringsScopeButton; // @synthesize stringsScopeButton;
@property(nonatomic) __weak DVTScopeBarButton *commentsScopeButton; // @synthesize commentsScopeButton;
@property(nonatomic) __weak DVTScopeBarButton *fileNamesScopeButton; // @synthesize fileNamesScopeButton;
@property(nonatomic) __weak DVTScopeBarButton *codeScopeButton; // @synthesize codeScopeButton;
@property(nonatomic) __weak DVTScopeBarButton *allScopeButton; // @synthesize allScopeButton;
@property(nonatomic, retain) NSLayoutConstraint *topBarLayoutConstraint; // @synthesize topBarLayoutConstraint;
@property(nonatomic) __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator;
@property(nonatomic) __weak NSButton *cancelButton; // @synthesize cancelButton;
@property(nonatomic) __weak NSButton *okButton; // @synthesize okButton;
@property(nonatomic) __weak DVTBorderedView *topBarBorderedView; // @synthesize topBarBorderedView;
@property(nonatomic) __weak NSStackView *stackView; // @synthesize stackView;
@property(nonatomic) __weak NSScrollView *scrollView; // @synthesize scrollView;

@end

