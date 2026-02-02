//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol StoreEmoticonGetDesignerAcctInfoCgiDelegate;

@interface StoreEmoticonGetDesignerAcctInfoCgi
{
    unsigned int _designerUin;
    id <StoreEmoticonGetDesignerAcctInfoCgiDelegate> _delegate;
    NSString *_designerId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int designerUin; // @synthesize designerUin=_designerUin;
@property(retain, nonatomic) NSString *designerId; // @synthesize designerId=_designerId;
@property(nonatomic) __weak id <StoreEmoticonGetDesignerAcctInfoCgiDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (_Bool)startRequestWithDesignerUin:(unsigned int)arg1;
- (_Bool)startRequestWithDesignerId:(id)arg1;
- (id)init;

@end

