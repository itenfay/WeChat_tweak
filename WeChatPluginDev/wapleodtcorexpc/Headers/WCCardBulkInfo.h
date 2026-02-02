//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WCCardBulkInfo
{
    _Bool _acceptButtonStatus;
    unsigned int _privateStatus;
    NSMutableArray *_cardDataList;
    NSString *_acceptButtonWording;
    NSString *_privateWording;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *privateWording; // @synthesize privateWording=_privateWording;
@property(nonatomic) _Bool acceptButtonStatus; // @synthesize acceptButtonStatus=_acceptButtonStatus;
@property(nonatomic) unsigned int privateStatus; // @synthesize privateStatus=_privateStatus;
@property(retain, nonatomic) NSString *acceptButtonWording; // @synthesize acceptButtonWording=_acceptButtonWording;
@property(retain, nonatomic) NSMutableArray *cardDataList; // @synthesize cardDataList=_cardDataList;

@end

