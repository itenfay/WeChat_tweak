//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData;
@protocol StoreEmoticonGetDesginerIPListCgiDelegate;

@interface StoreEmoticonGetDesginerIPListCgi
{
    unsigned int _designerUin;
    id <StoreEmoticonGetDesginerIPListCgiDelegate> _delegate;
    NSData *_context;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int designerUin; // @synthesize designerUin=_designerUin;
@property(retain, nonatomic) NSData *context; // @synthesize context=_context;
@property(nonatomic) __weak id <StoreEmoticonGetDesginerIPListCgiDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (_Bool)startRequest:(_Bool)arg1;
- (id)initWithContext:(id)arg1 andDesignerUin:(unsigned int)arg2;
- (id)init;

@end

