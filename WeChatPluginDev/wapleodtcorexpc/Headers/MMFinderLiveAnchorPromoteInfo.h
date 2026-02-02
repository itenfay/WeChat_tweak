//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveAnchorPromoteInfo : NSObject
{
    _Bool _isPromoting;
    _Bool _readyToDisplay;
    _Bool _showAudience;
    unsigned int _type;
    unsigned int _status;
    unsigned long long _promoteId;
    NSString *_statusTips;
    NSString *_anchorUsername;
}

+ (id)createAnchorPromoteInfoFrom:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *anchorUsername; // @synthesize anchorUsername=_anchorUsername;
@property(retain, nonatomic) NSString *statusTips; // @synthesize statusTips=_statusTips;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(nonatomic) _Bool showAudience; // @synthesize showAudience=_showAudience;
@property(nonatomic) _Bool readyToDisplay; // @synthesize readyToDisplay=_readyToDisplay;
@property(nonatomic) _Bool isPromoting; // @synthesize isPromoting=_isPromoting;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned long long promoteId; // @synthesize promoteId=_promoteId;
- (_Bool)shouldSkipReportOnPromoteManagerPanelStart;
- (id)promoteKey;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;

@end

