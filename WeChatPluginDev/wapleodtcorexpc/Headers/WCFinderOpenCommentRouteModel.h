//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIViewController, WCFinderContentVMShareModel, WCFinderExternalCommentModel, WCFinderFeedContentVM;
@protocol WCFinderPostMgrDelegate;

@interface WCFinderOpenCommentRouteModel : NSObject
{
    _Bool _shouldEnterKeyBoard;
    _Bool _statusBarHidden;
    _Bool _showTitle;
    _Bool _shouldForceHideTitle;
    _Bool _shouldHideLocalCommentList;
    _Bool _isStatusBarColorBlack;
    _Bool _showBackgroundButtonColor;
    int _commentScene;
    UIViewController *_fromVC;
    WCFinderFeedContentVM *_contentVM;
    unsigned long long _viewScene;
    unsigned long long _enterType;
    unsigned long long _refCommentID;
    unsigned long long _commentStyleType;
    WCFinderExternalCommentModel *_appendCommentModel;
    double _halfScreenHeightRatio;
    WCFinderContentVMShareModel *_shareModel;
    id <WCFinderPostMgrDelegate> _postDelegate;
    NSString *_providerFinderUsername;
    unsigned long long _viewerScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long viewerScene; // @synthesize viewerScene=_viewerScene;
@property(copy, nonatomic) NSString *providerFinderUsername; // @synthesize providerFinderUsername=_providerFinderUsername;
@property(nonatomic) __weak id <WCFinderPostMgrDelegate> postDelegate; // @synthesize postDelegate=_postDelegate;
@property(nonatomic) _Bool showBackgroundButtonColor; // @synthesize showBackgroundButtonColor=_showBackgroundButtonColor;
@property(retain, nonatomic) WCFinderContentVMShareModel *shareModel; // @synthesize shareModel=_shareModel;
@property(nonatomic) double halfScreenHeightRatio; // @synthesize halfScreenHeightRatio=_halfScreenHeightRatio;
@property(retain, nonatomic) WCFinderExternalCommentModel *appendCommentModel; // @synthesize appendCommentModel=_appendCommentModel;
@property(nonatomic) _Bool isStatusBarColorBlack; // @synthesize isStatusBarColorBlack=_isStatusBarColorBlack;
@property(nonatomic) _Bool shouldHideLocalCommentList; // @synthesize shouldHideLocalCommentList=_shouldHideLocalCommentList;
@property(nonatomic) unsigned long long commentStyleType; // @synthesize commentStyleType=_commentStyleType;
@property(nonatomic) _Bool shouldForceHideTitle; // @synthesize shouldForceHideTitle=_shouldForceHideTitle;
@property(nonatomic) _Bool showTitle; // @synthesize showTitle=_showTitle;
@property(nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(nonatomic) unsigned long long refCommentID; // @synthesize refCommentID=_refCommentID;
@property(nonatomic) unsigned long long enterType; // @synthesize enterType=_enterType;
@property(nonatomic) _Bool shouldEnterKeyBoard; // @synthesize shouldEnterKeyBoard=_shouldEnterKeyBoard;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) unsigned long long viewScene; // @synthesize viewScene=_viewScene;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) UIViewController *fromVC; // @synthesize fromVC=_fromVC;
- (id)initWithFromVC:(id)arg1 contentVM:(id)arg2 commentScene:(int)arg3 shouldEnterKeyBoard:(_Bool)arg4 enterType:(unsigned long long)arg5;

@end

