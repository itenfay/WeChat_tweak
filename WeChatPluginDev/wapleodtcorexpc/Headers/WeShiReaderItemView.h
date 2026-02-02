//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, ReaderWrap, RichTextView, WeShiMsgCardView;
@protocol WeiShiMsgCardMenuDelegate, WeiShiReaderItemViewDelegate;

@interface WeShiReaderItemView : UIView
{
    RichTextView *titleView;
    WeShiMsgCardView *leftCardView;
    WeShiMsgCardView *rightCardView;
    id <WeiShiReaderItemViewDelegate> _viewDelegate;
    id <WeiShiMsgCardMenuDelegate> _menuDelegate;
    ReaderWrap *_leftReaderWrap;
    ReaderWrap *_rightReaderWrap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ReaderWrap *rightReaderWrap; // @synthesize rightReaderWrap=_rightReaderWrap;
@property(retain, nonatomic) ReaderWrap *leftReaderWrap; // @synthesize leftReaderWrap=_leftReaderWrap;
@property(nonatomic) __weak id <WeiShiMsgCardMenuDelegate> menuDelegate; // @synthesize menuDelegate=_menuDelegate;
@property(nonatomic) __weak id <WeiShiReaderItemViewDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
- (void)doReport;
- (void)onTableViewDidScrollDown;
- (void)onRightCardLongPress:(id)arg1;
- (void)onLeftCardLongPress:(id)arg1;
- (void)onCardClicked:(id)arg1;
- (id)timeText:(unsigned long long)arg1;
- (void)startInitView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

