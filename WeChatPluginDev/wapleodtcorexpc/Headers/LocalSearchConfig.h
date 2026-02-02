//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface LocalSearchConfig : NSObject
{
    NSMutableArray *_arrClassConfig;
}

+ (id)joinSearchContentFromArr:(id)arg1 withSeperator:(id)arg2;
+ (id)getContactMatchTypeConfig:(int)arg1 withContact:(id)arg2 isPinyin:(_Bool)arg3;
+ (void)genMainSearchContent:(id *)arg1 andPinyinSearchContent:(id *)arg2 withTarget:(id)arg3;
+ (id)getSharedDefaultConfig;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrClassConfig; // @synthesize arrClassConfig=_arrClassConfig;
- (id)description;

@end

