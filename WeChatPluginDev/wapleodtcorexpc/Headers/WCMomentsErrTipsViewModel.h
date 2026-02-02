//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCCommentItem, WCDataItem;

@interface WCMomentsErrTipsViewModel : NSObject
{
    _Bool _isCustomTipsForComment;
    _Bool _isSecurityVerified;
    _Bool _isDetail;
    NSString *_errTips;
    NSString *_customTips;
    unsigned long long _uploadErrType;
    WCDataItem *_dataItem;
    WCCommentItem *_comment;
    long long _tipType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDetail; // @synthesize isDetail=_isDetail;
@property(nonatomic) long long tipType; // @synthesize tipType=_tipType;
@property(retain, nonatomic) WCCommentItem *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(readonly, nonatomic) _Bool isSecurityVerified; // @synthesize isSecurityVerified=_isSecurityVerified;
@property(readonly, nonatomic) unsigned long long uploadErrType; // @synthesize uploadErrType=_uploadErrType;
@property(readonly, nonatomic) _Bool isCustomTipsForComment; // @synthesize isCustomTipsForComment=_isCustomTipsForComment;
@property(readonly, nonatomic) NSString *customTips; // @synthesize customTips=_customTips;
@property(readonly, nonatomic) NSString *errTips; // @synthesize errTips=_errTips;
- (id)errTipsAccessibilityText;
@property(readonly, nonatomic) _Bool isTipsForFold;
- (id)genCustomTipsForDetail;
- (id)genErrTipsForDetail;
- (void)configTips;
- (void)updateWithDataItem:(id)arg1 comment:(id)arg2;
- (id)initWithDataItem:(id)arg1 comment:(id)arg2 tipType:(long long)arg3 isDetail:(_Bool)arg4;
- (id)initWithDataItem:(id)arg1;

@end

