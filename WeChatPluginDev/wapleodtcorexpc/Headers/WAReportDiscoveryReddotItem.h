//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportDiscoveryReddotItem
{
    _Bool _hasRedDot;
    unsigned int _actionType;
    unsigned int _version;
    unsigned int _redDotTipsId;
    NSString *_redDotUniqueId;
    NSString *_redDotTitle;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int redDotTipsId; // @synthesize redDotTipsId=_redDotTipsId;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *redDotTitle; // @synthesize redDotTitle=_redDotTitle;
@property(copy, nonatomic) NSString *redDotUniqueId; // @synthesize redDotUniqueId=_redDotUniqueId;
@property(nonatomic) _Bool hasRedDot; // @synthesize hasRedDot=_hasRedDot;
@property(nonatomic) unsigned int actionType; // @synthesize actionType=_actionType;
- (id)reportString;
- (int)reportID;

@end

