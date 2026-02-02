//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, ChatroomProfileView, MMPageSheetAdapter, NSString, UIView;
@protocol WCPayGPLaunchChatroomProfilePageSheetDelegate;

@interface WCPayGPLaunchChatroomProfilePageSheet : NSObject
{
    id <WCPayGPLaunchChatroomProfilePageSheetDelegate> _delegate;
    CContact *_contact;
    NSString *_title;
    double _minHeight;
    MMPageSheetAdapter *_pageAdapter;
    UIView *_pageSheetDetailView;
    ChatroomProfileView *_profileView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ChatroomProfileView *profileView; // @synthesize profileView=_profileView;
@property(retain, nonatomic) UIView *pageSheetDetailView; // @synthesize pageSheetDetailView=_pageSheetDetailView;
@property(retain, nonatomic) MMPageSheetAdapter *pageAdapter; // @synthesize pageAdapter=_pageAdapter;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak id <WCPayGPLaunchChatroomProfilePageSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (double)profileViewCellLeftMargin;
- (double)profileViewNameFontSize;
- (double)profileViewRowHeight;
- (double)profileViewHeadInnerMargin;
- (double)profileViewLeftRightMargin;
- (double)profileViewHeadLength;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (void)pageSheetWillAppear:(id)arg1;
- (void)setupAdapter;
- (void)setupDetailViewContent;
- (_Bool)shouldSetupDetailViewContent;
- (id)getAdapter;
- (id)initWithDelegate:(id)arg1 chatroomContact:(id)arg2 title:(id)arg3 minHeight:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

