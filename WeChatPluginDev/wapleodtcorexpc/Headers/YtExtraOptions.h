//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface YtExtraOptions : NSObject
{
    NSString *_bussiness_id;
    NSString *_person_id;
    NSString *_person_type;
    NSString *_req_type;
    NSString *_mp_business_buffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *mp_business_buffer; // @synthesize mp_business_buffer=_mp_business_buffer;
@property(retain, nonatomic) NSString *req_type; // @synthesize req_type=_req_type;
@property(retain, nonatomic) NSString *person_type; // @synthesize person_type=_person_type;
@property(retain, nonatomic) NSString *person_id; // @synthesize person_id=_person_id;
@property(retain, nonatomic) NSString *bussiness_id; // @synthesize bussiness_id=_bussiness_id;

@end

