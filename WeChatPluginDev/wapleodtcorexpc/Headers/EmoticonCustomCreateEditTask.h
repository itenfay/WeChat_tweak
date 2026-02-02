//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface EmoticonCustomCreateEditTask
{
    CDUnknownBlockType _createFailBlock;
    CDUnknownBlockType _createSucBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType createSucBlock; // @synthesize createSucBlock=_createSucBlock;
@property(copy, nonatomic) CDUnknownBlockType createFailBlock; // @synthesize createFailBlock=_createFailBlock;
- (void)startEdit;

@end

