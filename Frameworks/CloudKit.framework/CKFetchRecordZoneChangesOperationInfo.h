/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchRecordZoneChangesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    long long  _changeTypes;
    bool  _fetchAllChanges;
    NSDictionary * _optionsByRecordZoneID;
    NSArray * _recordZoneIDs;
    bool  _shouldFetchAssetContents;
}

@property (nonatomic) long long changeTypes;
@property (nonatomic) bool fetchAllChanges;
@property (nonatomic, retain) NSDictionary *optionsByRecordZoneID;
@property (nonatomic, retain) NSArray *recordZoneIDs;
@property (nonatomic) bool shouldFetchAssetContents;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)changeTypes;
- (void)encodeWithCoder:(id)arg1;
- (bool)fetchAllChanges;
- (id)initWithCoder:(id)arg1;
- (id)optionsByRecordZoneID;
- (id)recordZoneIDs;
- (void)setChangeTypes:(long long)arg1;
- (void)setFetchAllChanges:(bool)arg1;
- (void)setOptionsByRecordZoneID:(id)arg1;
- (void)setRecordZoneIDs:(id)arg1;
- (void)setShouldFetchAssetContents:(bool)arg1;
- (bool)shouldFetchAssetContents;

@end
