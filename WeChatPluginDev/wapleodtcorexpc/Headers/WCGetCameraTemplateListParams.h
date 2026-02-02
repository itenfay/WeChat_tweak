//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCGetCameraTemplateListParams : NSObject
{
    NSString *_fromTmplId;
    unsigned long long _fromEventId;
    NSString *_musicId;
    unsigned long long _tabId;
    unsigned long long _enterScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(nonatomic) unsigned long long tabId; // @synthesize tabId=_tabId;
@property(copy, nonatomic) NSString *musicId; // @synthesize musicId=_musicId;
@property(nonatomic) unsigned long long fromEventId; // @synthesize fromEventId=_fromEventId;
@property(copy, nonatomic) NSString *fromTmplId; // @synthesize fromTmplId=_fromTmplId;

@end

