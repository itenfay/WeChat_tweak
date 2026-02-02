//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCCanvasPageItem : NSObject
{
    NSString *_canvasPageXml;
}

+ (void)initialize;
+ (void)PBArrayAdd_canvasPageXml;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *canvasPageXml; // @synthesize canvasPageXml=_canvasPageXml;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

