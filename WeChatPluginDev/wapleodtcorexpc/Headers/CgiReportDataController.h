//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CgiReportDataController : NSObject
{
    NSMutableDictionary *_controllMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *controllMap; // @synthesize controllMap=_controllMap;
- (void)readExptConfig;
- (void)onExptItemListChange;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)initDefaultConfig;
- (_Bool)checkCanReport:(unsigned int)arg1 andItemId:(id)arg2 andEventId:(id)arg3;
- (id)init;

@end

