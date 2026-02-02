//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCNewClickStatRecordPageItem
{
    unsigned int pageAction;
    unsigned int timeStamp;
    NSString *pageID;
}

+ (id)pageItem:(id)arg1 withAction:(unsigned int)arg2 withTimeStamp:(unsigned int)arg3;
- (void).cxx_destruct;
@property(nonatomic) unsigned int timeStamp; // @synthesize timeStamp;
@property(retain, nonatomic) NSString *pageID; // @synthesize pageID;
@property(nonatomic) unsigned int pageAction; // @synthesize pageAction;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

