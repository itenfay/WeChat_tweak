//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WAAuthorizeResultInfo, WAAuthorizeSheetInfo;
@protocol IWAAuthorizePage;

@interface WAAuthPageSheetViewModel : NSObject
{
    _Bool _disableAcceptButton;
    _Bool _disableDismissWhenAccept;
    WAAuthorizeSheetInfo *_infoModel;
    id <IWAAuthorizePage> _pageSheet;
    CDUnknownBlockType _acceptButtonUpdateAction;
    CDUnknownBlockType _showNeedAcceptProtocolAnimation;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool disableDismissWhenAccept; // @synthesize disableDismissWhenAccept=_disableDismissWhenAccept;
@property(copy, nonatomic) CDUnknownBlockType showNeedAcceptProtocolAnimation; // @synthesize showNeedAcceptProtocolAnimation=_showNeedAcceptProtocolAnimation;
@property(copy, nonatomic) CDUnknownBlockType acceptButtonUpdateAction; // @synthesize acceptButtonUpdateAction=_acceptButtonUpdateAction;
@property(nonatomic) _Bool disableAcceptButton; // @synthesize disableAcceptButton=_disableAcceptButton;
@property(nonatomic) __weak id <IWAAuthorizePage> pageSheet; // @synthesize pageSheet=_pageSheet;
@property(retain, nonatomic) WAAuthorizeSheetInfo *infoModel; // @synthesize infoModel=_infoModel;
@property(readonly, nonatomic) WAAuthorizeResultInfo *resultInfo;
- (_Bool)checkCanAccept;
- (id)initWithInfoModel:(id)arg1 pageSheet:(id)arg2;
- (id)initWithPageSheet:(id)arg1;

@end

