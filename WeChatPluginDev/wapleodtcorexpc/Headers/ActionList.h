//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface ActionList : NSObject
{
    int _type;
    int _showType;
    NSString *_key;
    NSString *_iconUrl;
    NSString *_title;
    NSMutableArray *_actions;
    double _iconWidth;
    double _iconHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double iconHeight; // @synthesize iconHeight=_iconHeight;
@property(nonatomic) double iconWidth; // @synthesize iconWidth=_iconWidth;
@property(retain, nonatomic) NSMutableArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) int showType; // @synthesize showType=_showType;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)toXml;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

