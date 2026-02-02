//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderContactPreviewData;
@protocol WCFinderContactFinderAssistDelegate;

@interface WCFinderContactFinderAssist : NSObject
{
    _Bool _hasFetchPreviewData;
    _Bool _entranceCellExposed;
    _Bool _useNewStyle;
    long long _mask;
    long long _type;
    id <WCFinderContactFinderAssistDelegate> _delegate;
    double _customViewRightSmall;
    double _imageViewMargin;
    double _customViewLeftMargin;
    NSString *_username;
    NSString *_finderUsername;
    NSString *_alreadyFetchKey;
    WCFinderContactPreviewData *_previewData;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useNewStyle; // @synthesize useNewStyle=_useNewStyle;
@property(retain, nonatomic) WCFinderContactPreviewData *previewData; // @synthesize previewData=_previewData;
@property(retain, nonatomic) NSString *alreadyFetchKey; // @synthesize alreadyFetchKey=_alreadyFetchKey;
@property(nonatomic) _Bool entranceCellExposed; // @synthesize entranceCellExposed=_entranceCellExposed;
@property(nonatomic) _Bool hasFetchPreviewData; // @synthesize hasFetchPreviewData=_hasFetchPreviewData;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) double customViewLeftMargin; // @synthesize customViewLeftMargin=_customViewLeftMargin;
@property(nonatomic) double imageViewMargin; // @synthesize imageViewMargin=_imageViewMargin;
@property(nonatomic) double customViewRightSmall; // @synthesize customViewRightSmall=_customViewRightSmall;
@property(nonatomic) __weak id <WCFinderContactFinderAssistDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long mask; // @synthesize mask=_mask;
- (void)onTapAuthViews;
- (id)contact;
- (void)showFinderProfile;
- (id)getFinderCellViewNewStyle:(_Bool)arg1;
- (id)finderEntranceCellInfo;
- (_Bool)hasFinderEntranceCell;
- (void)addFinderEntranceCellAtSection:(id)arg1;
- (id)fetchCheckKey;
- (id)fetchLocalPreviewData;
- (void)fetchPreviewDataFinish;
- (id)fetchAndSyncFinderContactPreviewData;
- (id)finderAuthString;
- (id)finderAuthInfo;
- (void)addFinderToSection:(id)arg1;
- (id)makeFinderSection;
- (void)setupWXUsername:(id)arg1 finderUserName:(id)arg2;
- (id)init;

@end

