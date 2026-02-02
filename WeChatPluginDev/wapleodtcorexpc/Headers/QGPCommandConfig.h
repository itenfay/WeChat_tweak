//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QGPCommandConfig : NSObject
{
    _Bool _hasReturn;
    SEL _selector;
    NSString *_commandClsName;
}

+ (id)createSelector:(SEL)arg1 commandClsName:(id)arg2 hasReturn:(_Bool)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *commandClsName; // @synthesize commandClsName=_commandClsName;
@property(nonatomic) _Bool hasReturn; // @synthesize hasReturn=_hasReturn;
@property SEL selector; // @synthesize selector=_selector;
- (_Bool)isValid;

@end

