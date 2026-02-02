//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderGeneralExtConfigModel;

@interface WCFinderGeneralJumpButton : NSObject
{
    int _jumpType;
    NSString *_content;
    unsigned long long _buttonStyle;
    WCFinderGeneralExtConfigModel *_extConfig;
    CDUnknownBlockType _jumpNextPostAction;
    CDUnknownBlockType _hookWebVCBlock;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType hookWebVCBlock; // @synthesize hookWebVCBlock=_hookWebVCBlock;
@property(copy, nonatomic) CDUnknownBlockType jumpNextPostAction; // @synthesize jumpNextPostAction=_jumpNextPostAction;
@property(nonatomic) int jumpType; // @synthesize jumpType=_jumpType;
@property(retain, nonatomic) WCFinderGeneralExtConfigModel *extConfig; // @synthesize extConfig=_extConfig;
@property(nonatomic) unsigned long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (void)jumpAction;

@end

