//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMHandOffAttributes, NSString;

@interface MMHandOffItem
{
    unsigned int _receiveSeqNum;
    MMHandOffAttributes *__XMLAttributes;
    long long _handofftype;
    NSString *_title;
    long long _opCode;
}

+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int receiveSeqNum; // @synthesize receiveSeqNum=_receiveSeqNum;
@property(nonatomic) long long opCode; // @synthesize opCode=_opCode;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long handofftype; // @synthesize handofftype=_handofftype;
@property(retain, nonatomic) MMHandOffAttributes *_XMLAttributes; // @synthesize _XMLAttributes=__XMLAttributes;
- (id)initFromMinimizeTaskData:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getXML;
- (id)initWith:(long long)arg1;

@end

