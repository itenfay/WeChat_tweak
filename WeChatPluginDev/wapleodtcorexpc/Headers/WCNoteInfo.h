//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString;

@interface WCNoteInfo : NSObject
{
    int _favLocalId;
    int _editTime;
    int _fromScene;
    NSString *_editUsr;
    NSArray *_dataList;
    NSData *_dataListNSCodingData;
}

+ (id)XmlOfNoteInfoDataList:(id)arg1;
+ (id)dataListFromXmlNode:(struct XmlReaderNode_t *)arg1;
+ (id)xmlTag;
+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
+ (_Bool)isSupport:(struct XmlReaderNode_t *)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_dataListNSCodingData;
+ (void)PBArrayAdd_editUsr;
+ (void)PBArrayAdd_editTime;
+ (void)PBArrayAdd_favLocalId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *dataListNSCodingData; // @synthesize dataListNSCodingData=_dataListNSCodingData;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
@property(nonatomic) int fromScene; // @synthesize fromScene=_fromScene;
@property(retain, nonatomic) NSString *editUsr; // @synthesize editUsr=_editUsr;
@property(nonatomic) int editTime; // @synthesize editTime=_editTime;
@property(nonatomic) int favLocalId; // @synthesize favLocalId=_favLocalId;
- (id)toXML;
- (void)afterPBCoderProcess;
- (void)beforePBCoderProcess;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

