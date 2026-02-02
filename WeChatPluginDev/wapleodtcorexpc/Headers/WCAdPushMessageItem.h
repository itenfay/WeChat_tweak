//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCAdPushDeleteAdInfo;

@interface WCAdPushMessageItem : NSObject
{
    long long _actionType;
    WCAdPushDeleteAdInfo *_deleteAdInfo;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdPushDeleteAdInfo *deleteAdInfo; // @synthesize deleteAdInfo=_deleteAdInfo;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;

@end

