//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCSessionDSLDataModel
{
    unsigned int _chainIndex;
    NSString *_fieldName;
    NSString *_fieldType;
    NSString *_containerIndex;
    NSString *_containerKey;
    NSString *_methodName;
    NSString *_methodAttr;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int chainIndex; // @synthesize chainIndex=_chainIndex;
@property(retain, nonatomic) NSString *methodAttr; // @synthesize methodAttr=_methodAttr;
@property(retain, nonatomic) NSString *methodName; // @synthesize methodName=_methodName;
@property(retain, nonatomic) NSString *containerKey; // @synthesize containerKey=_containerKey;
@property(retain, nonatomic) NSString *containerIndex; // @synthesize containerIndex=_containerIndex;
@property(retain, nonatomic) NSString *fieldType; // @synthesize fieldType=_fieldType;
@property(retain, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
- (id)toString;

@end

