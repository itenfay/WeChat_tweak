//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MMBizMenuInfo : NSObject
{
    unsigned int _uin;
    unsigned int _interativeMode;
    unsigned int _updateTime;
    NSMutableArray *_arrMenu;
    unsigned int _type;
}

+ (id)svgImageNameForShowIconType:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSMutableArray *arrMenu; // @synthesize arrMenu=_arrMenu;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) unsigned int interactiveMode; // @synthesize interactiveMode=_interativeMode;
@property(nonatomic) unsigned int uin; // @synthesize uin=_uin;
- (void)parseFromJsonDictionary:(id)arg1;
- (id)init;

@end

