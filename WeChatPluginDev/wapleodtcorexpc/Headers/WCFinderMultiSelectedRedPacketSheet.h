//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, UIButton, UIView;
@protocol WCFinderMultiSelectedRedPacketSheetDelegate;

@interface WCFinderMultiSelectedRedPacketSheet
{
    id <WCFinderMultiSelectedRedPacketSheetDelegate> _sheetDelegate;
    UIView *_contentView;
    NSArray *_redPacketArray;
    long long _curSelectIndex;
    UIButton *_acceptBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *acceptBtn; // @synthesize acceptBtn=_acceptBtn;
@property(nonatomic) long long curSelectIndex; // @synthesize curSelectIndex=_curSelectIndex;
@property(retain, nonatomic) NSArray *redPacketArray; // @synthesize redPacketArray=_redPacketArray;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <WCFinderMultiSelectedRedPacketSheetDelegate> sheetDelegate; // @synthesize sheetDelegate=_sheetDelegate;
- (id)viewForCarousel:(id)arg1 indexPath:(id)arg2 index:(long long)arg3;
- (long long)numbersForCarousel:(id)arg1;
- (void)updateAcceptBtnState;
- (void)carouselView:(id)arg1 didEndScrollAtIndex:(long long)arg2 indexPathRow:(long long)arg3;
- (id)getCurSelectRedPacketInfo;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onClickAccept;
- (void)onClose;
- (id)createContentView;
- (double)contentHeight;
- (double)getCustomView:(double)arg1;
- (double)heightOfWholeSheet;
- (id)initWithRedPacketArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

