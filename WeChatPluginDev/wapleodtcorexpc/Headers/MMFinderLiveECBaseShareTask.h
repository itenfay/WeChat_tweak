//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, FinderJumpInfo_LiteApp, NSString;

@interface MMFinderLiveECBaseShareTask : NSObject
{
    _Bool _showQRCodeEntrance;
    _Bool _showCopyLinkEntrance;
    _Bool _isGiveGiftEnable;
    _Bool _hideGiveGiftEntrance;
    _Bool _showComplaintEntrance;
    long long _taskType;
    NSString *_anchorFinderUsername;
    NSString *_lastGMsgID;
    long long _showShareType;
    NSString *_qrCodeEntranceText;
    NSString *_linkContent;
    FinderJumpInfo_LiteApp *_complaintApp;
    NSString *_appId;
    CContact *_contact;
    CDUnknownBlockType _compleBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType compleBlock; // @synthesize compleBlock=_compleBlock;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) FinderJumpInfo_LiteApp *complaintApp; // @synthesize complaintApp=_complaintApp;
@property(nonatomic) _Bool showComplaintEntrance; // @synthesize showComplaintEntrance=_showComplaintEntrance;
@property(copy, nonatomic) NSString *linkContent; // @synthesize linkContent=_linkContent;
@property(nonatomic) _Bool hideGiveGiftEntrance; // @synthesize hideGiveGiftEntrance=_hideGiveGiftEntrance;
@property(nonatomic) _Bool isGiveGiftEnable; // @synthesize isGiveGiftEnable=_isGiveGiftEnable;
@property(nonatomic) _Bool showCopyLinkEntrance; // @synthesize showCopyLinkEntrance=_showCopyLinkEntrance;
@property(copy, nonatomic) NSString *qrCodeEntranceText; // @synthesize qrCodeEntranceText=_qrCodeEntranceText;
@property(nonatomic) _Bool showQRCodeEntrance; // @synthesize showQRCodeEntrance=_showQRCodeEntrance;
@property(nonatomic) long long showShareType; // @synthesize showShareType=_showShareType;
@property(copy, nonatomic) NSString *lastGMsgID; // @synthesize lastGMsgID=_lastGMsgID;
@property(copy, nonatomic) NSString *anchorFinderUsername; // @synthesize anchorFinderUsername=_anchorFinderUsername;
@property(nonatomic) long long taskType; // @synthesize taskType=_taskType;
- (void)updateComplaintAppWithLiteAppId:(id)arg1 liteQuery:(id)arg2;

@end

