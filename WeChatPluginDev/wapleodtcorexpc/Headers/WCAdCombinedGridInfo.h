//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, WCAdCardBtnInfo;

@interface WCAdCombinedGridInfo : NSObject
{
    long long _displayMode;
    WCAdCardBtnInfo *_clickActionInfo;
    NSArray *_gridItems;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *gridItems; // @synthesize gridItems=_gridItems;
@property(retain, nonatomic) WCAdCardBtnInfo *clickActionInfo; // @synthesize clickActionInfo=_clickActionInfo;
@property(nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
- (_Bool)isDisplayModeBig;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

