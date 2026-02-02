//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface EmoticonStoreMainTabExptSetting : NSObject
{
    int _type;
    NSString *_tabWording;
    NSString *_listWording;
}

+ (id)savePath;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *listWording; // @synthesize listWording=_listWording;
@property(retain, nonatomic) NSString *tabWording; // @synthesize tabWording=_tabWording;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)initWithJsonString:(id)arg1;

@end

