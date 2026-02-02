//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class SnsObjItem;

@interface iWatchAppMsgItem
{
    SnsObjItem *_snsObj;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SnsObjItem *snsObj; // @synthesize snsObj=_snsObj;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (void)dealloc;

@end

