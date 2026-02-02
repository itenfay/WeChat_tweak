//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WAAppAuthorizationDetailViewModel
{
    unsigned int _choosenState;
    NSString *_titleString;
    NSString *_authorizationDetailString;
    NSMutableArray *_optionItems;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int choosenState; // @synthesize choosenState=_choosenState;
@property(retain, nonatomic) NSMutableArray *optionItems; // @synthesize optionItems=_optionItems;
@property(copy, nonatomic) NSString *authorizationDetailString; // @synthesize authorizationDetailString=_authorizationDetailString;
@property(copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;

@end

