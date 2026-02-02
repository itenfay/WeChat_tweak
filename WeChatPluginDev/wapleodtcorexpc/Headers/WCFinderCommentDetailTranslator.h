//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;
@protocol WCFinderCommentDetailTranslatorDelegate;

@interface WCFinderCommentDetailTranslator : NSObject
{
    _Bool _isFetchingTranslateComment;
    id <WCFinderCommentDetailTranslatorDelegate> _delegate;
    NSMutableSet *_visiableComments;
    NSMutableArray *_autoTranslateQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *autoTranslateQueue; // @synthesize autoTranslateQueue=_autoTranslateQueue;
@property(retain, nonatomic) NSMutableSet *visiableComments; // @synthesize visiableComments=_visiableComments;
@property(nonatomic) _Bool isFetchingTranslateComment; // @synthesize isFetchingTranslateComment=_isFetchingTranslateComment;
@property(nonatomic) __weak id <WCFinderCommentDetailTranslatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isInAutoTranslateMode;
- (void)_consumeQueue;
- (void)_enqueueWithComments:(id)arg1;
- (void)_enqueueWithIndexPaths:(id)arg1;
- (void)_translateComments:(id)arg1;
- (id)_indexPathsForStartSection:(unsigned long long)arg1 endSection:(unsigned long long)arg2;
- (void)prefetchComments:(id)arg1;
- (void)prefetchIfNeedWithTargetIndexPath:(id)arg1 visibleRows:(id)arg2;
- (void)didEndDisplayingIndexPath:(id)arg1;
- (void)willDisplayIndexPath:(id)arg1 verticalVelocity:(double)arg2;
- (void)prepareDataFor:(id)arg1;
- (void)toggleAutoTranslateWithVisibleRows:(id)arg1;
- (void)translateComment:(id)arg1;
- (void)translateContent:(id)arg1 complection:(CDUnknownBlockType)arg2;
- (_Bool)contentCanBeTranslated:(id)arg1;

@end

