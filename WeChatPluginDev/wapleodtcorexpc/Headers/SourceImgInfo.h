//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface SourceImgInfo : NSObject
{
    unsigned int _bizType;
    NSString *_imgSourceUrl;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_bizType;
+ (void)PBArrayAdd_imgSourceUrl;
- (void).cxx_destruct;
@property(nonatomic) unsigned int bizType; // @synthesize bizType=_bizType;
@property(copy, nonatomic) NSString *imgSourceUrl; // @synthesize imgSourceUrl=_imgSourceUrl;
@property(readonly, copy) NSString *description;
- (id)toXML;
- (_Bool)isValid;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

