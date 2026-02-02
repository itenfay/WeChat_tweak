//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class QBUniAttribute;

@interface QBUniPacket
{
    QBUniAttribute *_attributes;
}

+ (id)packet;
@property(readonly, nonatomic) QBUniAttribute *attributes; // @synthesize attributes=_attributes;
- (void).cxx_destruct;
- (long long)getReturnCode;
- (void)putObjectAttr:(id)arg1 value:(id)arg2;
- (void)putObjectAttr:(id)arg1 type:(id)arg2 value:(id)arg3;
- (void)putDataAttr:(id)arg1 value:(id)arg2;
- (id)getObjectAttr:(id)arg1 forClass:(Class)arg2;
- (void)__unpack:(id)arg1;
- (void)__pack:(id)arg1;
- (id)objectKeyWithName:(id)arg1;
- (id)description;
- (id)init;

@end

