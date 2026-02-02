//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ActionBase : NSObject
{
    int _actionType;
    int _showType;
    NSString *_key;
    id _actionItem;
    NSString *_imageUrl;
    NSString *_statId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *statId; // @synthesize statId=_statId;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) int showType; // @synthesize showType=_showType;
@property(retain, nonatomic) id actionItem; // @synthesize actionItem=_actionItem;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
- (id)toXml;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

