//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, PrepareFinder, UIView, WCFinderContact, WCFinderContactPreviewData, WCFinderRedDotTipsShowInfo;

@interface WCFinderPersonalCenterContactData : NSObject
{
    _Bool _showLiveEntranceRedDot;
    _Bool _incomeReddot;
    _Bool _showLougout;
    _Bool _newPrepareStyle;
    WCFinderContact *_contact;
    PrepareFinder *_prepare;
    WCFinderRedDotTipsShowInfo *_settingRedDot;
    unsigned long long _cameraRedDotType;
    long long _liveBtnState;
    WCFinderRedDotTipsShowInfo *_finderMsgBtnRedDotInfo;
    WCFinderRedDotTipsShowInfo *_finderMsgBtnRightRedDotInfo;
    WCFinderRedDotTipsShowInfo *_memberMsgBtnRedDotInfo;
    long long _previewItemCount;
    WCFinderContactPreviewData *_previewData;
    NSString *_finderPrivateMsgTailText;
    WCFinderRedDotTipsShowInfo *_finderPrivateMsgRedDotInfo;
    NSString *_creatorMsgTailText;
    WCFinderRedDotTipsShowInfo *_creatorMsgRedDotInfo;
    CDUnknownBlockType _creatorBindReport;
    UIView *_reportRootView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *reportRootView; // @synthesize reportRootView=_reportRootView;
@property(nonatomic) _Bool newPrepareStyle; // @synthesize newPrepareStyle=_newPrepareStyle;
@property(copy, nonatomic) CDUnknownBlockType creatorBindReport; // @synthesize creatorBindReport=_creatorBindReport;
@property(retain, nonatomic) WCFinderRedDotTipsShowInfo *creatorMsgRedDotInfo; // @synthesize creatorMsgRedDotInfo=_creatorMsgRedDotInfo;
@property(retain, nonatomic) NSString *creatorMsgTailText; // @synthesize creatorMsgTailText=_creatorMsgTailText;
@property(retain, nonatomic) WCFinderRedDotTipsShowInfo *finderPrivateMsgRedDotInfo; // @synthesize finderPrivateMsgRedDotInfo=_finderPrivateMsgRedDotInfo;
@property(retain, nonatomic) NSString *finderPrivateMsgTailText; // @synthesize finderPrivateMsgTailText=_finderPrivateMsgTailText;
@property(retain, nonatomic) WCFinderContactPreviewData *previewData; // @synthesize previewData=_previewData;
@property(nonatomic) long long previewItemCount; // @synthesize previewItemCount=_previewItemCount;
@property(retain, nonatomic) WCFinderRedDotTipsShowInfo *memberMsgBtnRedDotInfo; // @synthesize memberMsgBtnRedDotInfo=_memberMsgBtnRedDotInfo;
@property(retain, nonatomic) WCFinderRedDotTipsShowInfo *finderMsgBtnRightRedDotInfo; // @synthesize finderMsgBtnRightRedDotInfo=_finderMsgBtnRightRedDotInfo;
@property(retain, nonatomic) WCFinderRedDotTipsShowInfo *finderMsgBtnRedDotInfo; // @synthesize finderMsgBtnRedDotInfo=_finderMsgBtnRedDotInfo;
@property(nonatomic) _Bool showLougout; // @synthesize showLougout=_showLougout;
@property(nonatomic) _Bool incomeReddot; // @synthesize incomeReddot=_incomeReddot;
@property(nonatomic) _Bool showLiveEntranceRedDot; // @synthesize showLiveEntranceRedDot=_showLiveEntranceRedDot;
@property(nonatomic) long long liveBtnState; // @synthesize liveBtnState=_liveBtnState;
@property(nonatomic) unsigned long long cameraRedDotType; // @synthesize cameraRedDotType=_cameraRedDotType;
@property(retain, nonatomic) WCFinderRedDotTipsShowInfo *settingRedDot; // @synthesize settingRedDot=_settingRedDot;
@property(retain, nonatomic) PrepareFinder *prepare; // @synthesize prepare=_prepare;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;

@end

