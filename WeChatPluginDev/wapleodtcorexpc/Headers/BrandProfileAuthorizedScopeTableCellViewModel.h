//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class JSAPIGetAllUseUserInfoResponse_PrivacyScopeItem, NSString;

@interface BrandProfileAuthorizedScopeTableCellViewModel : NSObject
{
    _Bool _isManaging;
    unsigned int _useState;
    NSString *_scope;
    NSString *_desc;
    NSString *_iconUrl;
    NSString *_darkModeIconUrl;
    double _cellHeight;
    JSAPIGetAllUseUserInfoResponse_PrivacyScopeItem *_originItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) JSAPIGetAllUseUserInfoResponse_PrivacyScopeItem *originItem; // @synthesize originItem=_originItem;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) _Bool isManaging; // @synthesize isManaging=_isManaging;
@property(retain, nonatomic) NSString *darkModeIconUrl; // @synthesize darkModeIconUrl=_darkModeIconUrl;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) unsigned int useState; // @synthesize useState=_useState;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *scope; // @synthesize scope=_scope;

@end

