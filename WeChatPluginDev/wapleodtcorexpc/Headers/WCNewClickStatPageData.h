//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCNewClickStatPageData
{
    unsigned int appearTimeStamp;
    unsigned int disappearTimeStamp;
    NSString *pageID;
}

+ (id)pageData:(id)arg1 withAppearTimeStamp:(unsigned int)arg2 withDisappearTimeStamp:(unsigned int)arg3;
- (void).cxx_destruct;
@property(nonatomic) unsigned int disappearTimeStamp; // @synthesize disappearTimeStamp;
@property(nonatomic) unsigned int appearTimeStamp; // @synthesize appearTimeStamp;
@property(retain, nonatomic) NSString *pageID; // @synthesize pageID;
- (id)description;

@end

