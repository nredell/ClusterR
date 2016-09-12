// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// tot_ss_data
double tot_ss_data(arma::mat x);
RcppExport SEXP ClusterR_tot_ss_data(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    __result = Rcpp::wrap(tot_ss_data(x));
    return __result;
END_RCPP
}
// KMEANS_rcpp
Rcpp::List KMEANS_rcpp(arma::mat& data, unsigned int clusters, int num_init, int max_iters, std::string initializer, bool fuzzy, int threads, bool verbose, Rcpp::Nullable<Rcpp::NumericMatrix> CENTROIDS, double tol, double eps, double tol_optimal_init, int seed);
RcppExport SEXP ClusterR_KMEANS_rcpp(SEXP dataSEXP, SEXP clustersSEXP, SEXP num_initSEXP, SEXP max_itersSEXP, SEXP initializerSEXP, SEXP fuzzySEXP, SEXP threadsSEXP, SEXP verboseSEXP, SEXP CENTROIDSSEXP, SEXP tolSEXP, SEXP epsSEXP, SEXP tol_optimal_initSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type clusters(clustersSEXP);
    Rcpp::traits::input_parameter< int >::type num_init(num_initSEXP);
    Rcpp::traits::input_parameter< int >::type max_iters(max_itersSEXP);
    Rcpp::traits::input_parameter< std::string >::type initializer(initializerSEXP);
    Rcpp::traits::input_parameter< bool >::type fuzzy(fuzzySEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericMatrix> >::type CENTROIDS(CENTROIDSSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< double >::type tol_optimal_init(tol_optimal_initSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    __result = Rcpp::wrap(KMEANS_rcpp(data, clusters, num_init, max_iters, initializer, fuzzy, threads, verbose, CENTROIDS, tol, eps, tol_optimal_init, seed));
    return __result;
END_RCPP
}
// KMEANS_arma
arma::mat KMEANS_arma(arma::mat& data, unsigned int clusters, int n_iter, bool verbose, std::string seed_mode, Rcpp::Nullable<Rcpp::NumericMatrix> CENTROIDS, int seed);
RcppExport SEXP ClusterR_KMEANS_arma(SEXP dataSEXP, SEXP clustersSEXP, SEXP n_iterSEXP, SEXP verboseSEXP, SEXP seed_modeSEXP, SEXP CENTROIDSSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type clusters(clustersSEXP);
    Rcpp::traits::input_parameter< int >::type n_iter(n_iterSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< std::string >::type seed_mode(seed_modeSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericMatrix> >::type CENTROIDS(CENTROIDSSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    __result = Rcpp::wrap(KMEANS_arma(data, clusters, n_iter, verbose, seed_mode, CENTROIDS, seed));
    return __result;
END_RCPP
}
// opt_clust_fK
Rcpp::List opt_clust_fK(arma::vec sum_distortion, int data_num_cols, double threshold);
RcppExport SEXP ClusterR_opt_clust_fK(SEXP sum_distortionSEXP, SEXP data_num_colsSEXP, SEXP thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type sum_distortion(sum_distortionSEXP);
    Rcpp::traits::input_parameter< int >::type data_num_cols(data_num_colsSEXP);
    Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP);
    __result = Rcpp::wrap(opt_clust_fK(sum_distortion, data_num_cols, threshold));
    return __result;
END_RCPP
}
// INTRA_CLUSTER_DISS
Rcpp::List INTRA_CLUSTER_DISS(arma::mat& data, Rcpp::List CLUSTERS);
RcppExport SEXP ClusterR_INTRA_CLUSTER_DISS(SEXP dataSEXP, SEXP CLUSTERSSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type CLUSTERS(CLUSTERSSEXP);
    __result = Rcpp::wrap(INTRA_CLUSTER_DISS(data, CLUSTERS));
    return __result;
END_RCPP
}
// Rcpp_2arma_mat
arma::mat Rcpp_2arma_mat(Rcpp::NumericMatrix x);
RcppExport SEXP ClusterR_Rcpp_2arma_mat(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type x(xSEXP);
    __result = Rcpp::wrap(Rcpp_2arma_mat(x));
    return __result;
END_RCPP
}
// SILHOUETTE_metric
Rcpp::List SILHOUETTE_metric(arma::mat& data, arma::vec CLUSTER, Rcpp::List tmp_clust, Rcpp::List in_cluster_dist);
RcppExport SEXP ClusterR_SILHOUETTE_metric(SEXP dataSEXP, SEXP CLUSTERSEXP, SEXP tmp_clustSEXP, SEXP in_cluster_distSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type CLUSTER(CLUSTERSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type tmp_clust(tmp_clustSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type in_cluster_dist(in_cluster_distSEXP);
    __result = Rcpp::wrap(SILHOUETTE_metric(data, CLUSTER, tmp_clust, in_cluster_dist));
    return __result;
END_RCPP
}
// evaluation_rcpp
Rcpp::List evaluation_rcpp(arma::mat& data, arma::vec CLUSTER, bool silhouette);
RcppExport SEXP ClusterR_evaluation_rcpp(SEXP dataSEXP, SEXP CLUSTERSEXP, SEXP silhouetteSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type CLUSTER(CLUSTERSEXP);
    Rcpp::traits::input_parameter< bool >::type silhouette(silhouetteSEXP);
    __result = Rcpp::wrap(evaluation_rcpp(data, CLUSTER, silhouette));
    return __result;
END_RCPP
}
// mini_batch_kmeans
Rcpp::List mini_batch_kmeans(arma::mat& data, unsigned int clusters, int batch_size, int max_iters, int num_init, double init_fraction, std::string initializer, int early_stop_iter, bool verbose, Rcpp::Nullable<Rcpp::NumericMatrix> CENTROIDS, double tol, double tol_optimal_init, int seed);
RcppExport SEXP ClusterR_mini_batch_kmeans(SEXP dataSEXP, SEXP clustersSEXP, SEXP batch_sizeSEXP, SEXP max_itersSEXP, SEXP num_initSEXP, SEXP init_fractionSEXP, SEXP initializerSEXP, SEXP early_stop_iterSEXP, SEXP verboseSEXP, SEXP CENTROIDSSEXP, SEXP tolSEXP, SEXP tol_optimal_initSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type clusters(clustersSEXP);
    Rcpp::traits::input_parameter< int >::type batch_size(batch_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type max_iters(max_itersSEXP);
    Rcpp::traits::input_parameter< int >::type num_init(num_initSEXP);
    Rcpp::traits::input_parameter< double >::type init_fraction(init_fractionSEXP);
    Rcpp::traits::input_parameter< std::string >::type initializer(initializerSEXP);
    Rcpp::traits::input_parameter< int >::type early_stop_iter(early_stop_iterSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericMatrix> >::type CENTROIDS(CENTROIDSSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< double >::type tol_optimal_init(tol_optimal_initSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    __result = Rcpp::wrap(mini_batch_kmeans(data, clusters, batch_size, max_iters, num_init, init_fraction, initializer, early_stop_iter, verbose, CENTROIDS, tol, tol_optimal_init, seed));
    return __result;
END_RCPP
}
// Predict_mini_batch_kmeans
Rcpp::List Predict_mini_batch_kmeans(arma::mat& data, Rcpp::Nullable<Rcpp::NumericMatrix> CENTROIDS, bool fuzzy, double eps);
RcppExport SEXP ClusterR_Predict_mini_batch_kmeans(SEXP dataSEXP, SEXP CENTROIDSSEXP, SEXP fuzzySEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericMatrix> >::type CENTROIDS(CENTROIDSSEXP);
    Rcpp::traits::input_parameter< bool >::type fuzzy(fuzzySEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    __result = Rcpp::wrap(Predict_mini_batch_kmeans(data, CENTROIDS, fuzzy, eps));
    return __result;
END_RCPP
}
// GMM_arma
Rcpp::List GMM_arma(arma::mat& data, unsigned int gaussian_comps, std::string dist_mode, std::string seed_mode, int km_iter, int em_iter, bool verbose, double var_floor, int seed);
RcppExport SEXP ClusterR_GMM_arma(SEXP dataSEXP, SEXP gaussian_compsSEXP, SEXP dist_modeSEXP, SEXP seed_modeSEXP, SEXP km_iterSEXP, SEXP em_iterSEXP, SEXP verboseSEXP, SEXP var_floorSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type gaussian_comps(gaussian_compsSEXP);
    Rcpp::traits::input_parameter< std::string >::type dist_mode(dist_modeSEXP);
    Rcpp::traits::input_parameter< std::string >::type seed_mode(seed_modeSEXP);
    Rcpp::traits::input_parameter< int >::type km_iter(km_iterSEXP);
    Rcpp::traits::input_parameter< int >::type em_iter(em_iterSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< double >::type var_floor(var_floorSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    __result = Rcpp::wrap(GMM_arma(data, gaussian_comps, dist_mode, seed_mode, km_iter, em_iter, verbose, var_floor, seed));
    return __result;
END_RCPP
}
// INV_COV
arma::mat INV_COV(arma::vec COV_VEC);
RcppExport SEXP ClusterR_INV_COV(SEXP COV_VECSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type COV_VEC(COV_VECSEXP);
    __result = Rcpp::wrap(INV_COV(COV_VEC));
    return __result;
END_RCPP
}
// predict_MGausDPDF
Rcpp::List predict_MGausDPDF(arma::mat data, arma::mat CENTROIDS, arma::mat COVARIANCE, arma::vec WEIGHTS, double eps);
RcppExport SEXP ClusterR_predict_MGausDPDF(SEXP dataSEXP, SEXP CENTROIDSSEXP, SEXP COVARIANCESEXP, SEXP WEIGHTSSEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type data(dataSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type CENTROIDS(CENTROIDSSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type COVARIANCE(COVARIANCESEXP);
    Rcpp::traits::input_parameter< arma::vec >::type WEIGHTS(WEIGHTSSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    __result = Rcpp::wrap(predict_MGausDPDF(data, CENTROIDS, COVARIANCE, WEIGHTS, eps));
    return __result;
END_RCPP
}
// GMM_arma_AIC_BIC
arma::rowvec GMM_arma_AIC_BIC(arma::mat& data, unsigned int max_clusters, std::string dist_mode, std::string seed_mode, int km_iter, int em_iter, bool verbose, double var_floor, std::string criterion, int seed);
RcppExport SEXP ClusterR_GMM_arma_AIC_BIC(SEXP dataSEXP, SEXP max_clustersSEXP, SEXP dist_modeSEXP, SEXP seed_modeSEXP, SEXP km_iterSEXP, SEXP em_iterSEXP, SEXP verboseSEXP, SEXP var_floorSEXP, SEXP criterionSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type max_clusters(max_clustersSEXP);
    Rcpp::traits::input_parameter< std::string >::type dist_mode(dist_modeSEXP);
    Rcpp::traits::input_parameter< std::string >::type seed_mode(seed_modeSEXP);
    Rcpp::traits::input_parameter< int >::type km_iter(km_iterSEXP);
    Rcpp::traits::input_parameter< int >::type em_iter(em_iterSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< double >::type var_floor(var_floorSEXP);
    Rcpp::traits::input_parameter< std::string >::type criterion(criterionSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    __result = Rcpp::wrap(GMM_arma_AIC_BIC(data, max_clusters, dist_mode, seed_mode, km_iter, em_iter, verbose, var_floor, criterion, seed));
    return __result;
END_RCPP
}
// dissim_mat
arma::mat dissim_mat(arma::mat& data, std::string method, double minkowski_p, bool upper, bool diagonal, int threads, double eps);
RcppExport SEXP ClusterR_dissim_mat(SEXP dataSEXP, SEXP methodSEXP, SEXP minkowski_pSEXP, SEXP upperSEXP, SEXP diagonalSEXP, SEXP threadsSEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< double >::type minkowski_p(minkowski_pSEXP);
    Rcpp::traits::input_parameter< bool >::type upper(upperSEXP);
    Rcpp::traits::input_parameter< bool >::type diagonal(diagonalSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    __result = Rcpp::wrap(dissim_mat(data, method, minkowski_p, upper, diagonal, threads, eps));
    return __result;
END_RCPP
}
// boolean_function
bool boolean_function(arma::rowvec x, int y);
RcppExport SEXP ClusterR_boolean_function(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::rowvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type y(ySEXP);
    __result = Rcpp::wrap(boolean_function(x, y));
    return __result;
END_RCPP
}
// silhouette_matrix
Rcpp::List silhouette_matrix(arma::mat data, arma::rowvec end_indices_vec, arma::rowvec end_cost_vec, int threads);
RcppExport SEXP ClusterR_silhouette_matrix(SEXP dataSEXP, SEXP end_indices_vecSEXP, SEXP end_cost_vecSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type data(dataSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type end_indices_vec(end_indices_vecSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type end_cost_vec(end_cost_vecSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    __result = Rcpp::wrap(silhouette_matrix(data, end_indices_vec, end_cost_vec, threads));
    return __result;
END_RCPP
}
// subset_vec
arma::uvec subset_vec(arma::uvec x, arma::uvec y);
RcppExport SEXP ClusterR_subset_vec(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::uvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type y(ySEXP);
    __result = Rcpp::wrap(subset_vec(x, y));
    return __result;
END_RCPP
}
// ClusterMedoids
Rcpp::List ClusterMedoids(arma::mat& data, unsigned int clusters, std::string method, double minkowski_p, int threads, bool verbose, bool swap_phase, bool fuzzy, int seed);
RcppExport SEXP ClusterR_ClusterMedoids(SEXP dataSEXP, SEXP clustersSEXP, SEXP methodSEXP, SEXP minkowski_pSEXP, SEXP threadsSEXP, SEXP verboseSEXP, SEXP swap_phaseSEXP, SEXP fuzzySEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type clusters(clustersSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< double >::type minkowski_p(minkowski_pSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type swap_phase(swap_phaseSEXP);
    Rcpp::traits::input_parameter< bool >::type fuzzy(fuzzySEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    __result = Rcpp::wrap(ClusterMedoids(data, clusters, method, minkowski_p, threads, verbose, swap_phase, fuzzy, seed));
    return __result;
END_RCPP
}
// dissim_MEDOIDS
arma::mat dissim_MEDOIDS(arma::mat& data, std::string method, arma::mat MEDOIDS, double minkowski_p, int threads, double eps);
RcppExport SEXP ClusterR_dissim_MEDOIDS(SEXP dataSEXP, SEXP methodSEXP, SEXP MEDOIDSSEXP, SEXP minkowski_pSEXP, SEXP threadsSEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type MEDOIDS(MEDOIDSSEXP);
    Rcpp::traits::input_parameter< double >::type minkowski_p(minkowski_pSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    __result = Rcpp::wrap(dissim_MEDOIDS(data, method, MEDOIDS, minkowski_p, threads, eps));
    return __result;
END_RCPP
}
// fuzzy_and_stats
Rcpp::List fuzzy_and_stats(arma::mat data, int threads, double eps, bool fuzzy);
RcppExport SEXP ClusterR_fuzzy_and_stats(SEXP dataSEXP, SEXP threadsSEXP, SEXP epsSEXP, SEXP fuzzySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< bool >::type fuzzy(fuzzySEXP);
    __result = Rcpp::wrap(fuzzy_and_stats(data, threads, eps, fuzzy));
    return __result;
END_RCPP
}
// isolation
arma::rowvec isolation(arma::mat dissim_mat_subset, arma::uvec x);
RcppExport SEXP ClusterR_isolation(SEXP dissim_mat_subsetSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type dissim_mat_subset(dissim_mat_subsetSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type x(xSEXP);
    __result = Rcpp::wrap(isolation(dissim_mat_subset, x));
    return __result;
END_RCPP
}
// ClaraMedoids
Rcpp::List ClaraMedoids(arma::mat& data, unsigned int clusters, std::string method, int samples, double sample_size, double minkowski_p, int threads, bool verbose, bool swap_phase, bool fuzzy, int seed);
RcppExport SEXP ClusterR_ClaraMedoids(SEXP dataSEXP, SEXP clustersSEXP, SEXP methodSEXP, SEXP samplesSEXP, SEXP sample_sizeSEXP, SEXP minkowski_pSEXP, SEXP threadsSEXP, SEXP verboseSEXP, SEXP swap_phaseSEXP, SEXP fuzzySEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type clusters(clustersSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< int >::type samples(samplesSEXP);
    Rcpp::traits::input_parameter< double >::type sample_size(sample_sizeSEXP);
    Rcpp::traits::input_parameter< double >::type minkowski_p(minkowski_pSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type swap_phase(swap_phaseSEXP);
    Rcpp::traits::input_parameter< bool >::type fuzzy(fuzzySEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    __result = Rcpp::wrap(ClaraMedoids(data, clusters, method, samples, sample_size, minkowski_p, threads, verbose, swap_phase, fuzzy, seed));
    return __result;
END_RCPP
}
// predict_medoids
Rcpp::List predict_medoids(arma::mat& data, std::string method, arma::mat MEDOIDS, double minkowski_p, int threads, bool fuzzy, double eps);
RcppExport SEXP ClusterR_predict_medoids(SEXP dataSEXP, SEXP methodSEXP, SEXP MEDOIDSSEXP, SEXP minkowski_pSEXP, SEXP threadsSEXP, SEXP fuzzySEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type MEDOIDS(MEDOIDSSEXP);
    Rcpp::traits::input_parameter< double >::type minkowski_p(minkowski_pSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type fuzzy(fuzzySEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    __result = Rcpp::wrap(predict_medoids(data, method, MEDOIDS, minkowski_p, threads, fuzzy, eps));
    return __result;
END_RCPP
}
// split_rcpp_lst
Rcpp::List split_rcpp_lst(Rcpp::List lst);
RcppExport SEXP ClusterR_split_rcpp_lst(SEXP lstSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::List >::type lst(lstSEXP);
    __result = Rcpp::wrap(split_rcpp_lst(lst));
    return __result;
END_RCPP
}
// OptClust
Rcpp::List OptClust(arma::mat& data, unsigned int iter_clust, std::string method, bool clara, int samples, double sample_size, double minkowski_p, std::string criterion, int threads, bool swap_phase, bool verbose, int seed);
RcppExport SEXP ClusterR_OptClust(SEXP dataSEXP, SEXP iter_clustSEXP, SEXP methodSEXP, SEXP claraSEXP, SEXP samplesSEXP, SEXP sample_sizeSEXP, SEXP minkowski_pSEXP, SEXP criterionSEXP, SEXP threadsSEXP, SEXP swap_phaseSEXP, SEXP verboseSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type iter_clust(iter_clustSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< bool >::type clara(claraSEXP);
    Rcpp::traits::input_parameter< int >::type samples(samplesSEXP);
    Rcpp::traits::input_parameter< double >::type sample_size(sample_sizeSEXP);
    Rcpp::traits::input_parameter< double >::type minkowski_p(minkowski_pSEXP);
    Rcpp::traits::input_parameter< std::string >::type criterion(criterionSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type swap_phase(swap_phaseSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    __result = Rcpp::wrap(OptClust(data, iter_clust, method, clara, samples, sample_size, minkowski_p, criterion, threads, swap_phase, verbose, seed));
    return __result;
END_RCPP
}
// set_seed
void set_seed(int seed);
RcppExport SEXP ClusterR_set_seed(SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    set_seed(seed);
    return R_NilValue;
END_RCPP
}
// cluster_indices
Rcpp::List cluster_indices(arma::vec CLUSTER);
RcppExport SEXP ClusterR_cluster_indices(SEXP CLUSTERSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type CLUSTER(CLUSTERSEXP);
    __result = Rcpp::wrap(cluster_indices(CLUSTER));
    return __result;
END_RCPP
}
// check_NaN_Inf
bool check_NaN_Inf(arma::mat x);
RcppExport SEXP ClusterR_check_NaN_Inf(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    __result = Rcpp::wrap(check_NaN_Inf(x));
    return __result;
END_RCPP
}
// calc_silhouette
double calc_silhouette(double intra, double outer);
RcppExport SEXP ClusterR_calc_silhouette(SEXP intraSEXP, SEXP outerSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type intra(intraSEXP);
    Rcpp::traits::input_parameter< double >::type outer(outerSEXP);
    __result = Rcpp::wrap(calc_silhouette(intra, outer));
    return __result;
END_RCPP
}
// sample_vec
arma::rowvec sample_vec(int num_elem, int start, int end, bool replace);
RcppExport SEXP ClusterR_sample_vec(SEXP num_elemSEXP, SEXP startSEXP, SEXP endSEXP, SEXP replaceSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type num_elem(num_elemSEXP);
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    Rcpp::traits::input_parameter< int >::type end(endSEXP);
    Rcpp::traits::input_parameter< bool >::type replace(replaceSEXP);
    __result = Rcpp::wrap(sample_vec(num_elem, start, end, replace));
    return __result;
END_RCPP
}
// squared_norm
double squared_norm(arma::mat x);
RcppExport SEXP ClusterR_squared_norm(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    __result = Rcpp::wrap(squared_norm(x));
    return __result;
END_RCPP
}
// MinMat
int MinMat(arma::vec x);
RcppExport SEXP ClusterR_MinMat(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    __result = Rcpp::wrap(MinMat(x));
    return __result;
END_RCPP
}
// WCSS
arma::vec WCSS(arma::rowvec vec, arma::mat centroids);
RcppExport SEXP ClusterR_WCSS(SEXP vecSEXP, SEXP centroidsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::rowvec >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type centroids(centroidsSEXP);
    __result = Rcpp::wrap(WCSS(vec, centroids));
    return __result;
END_RCPP
}
// validate_centroids
arma::rowvec validate_centroids(arma::mat& data, arma::mat init_centroids);
RcppExport SEXP ClusterR_validate_centroids(SEXP dataSEXP, SEXP init_centroidsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type init_centroids(init_centroidsSEXP);
    __result = Rcpp::wrap(validate_centroids(data, init_centroids));
    return __result;
END_RCPP
}
// kmeans_pp_dist
double kmeans_pp_dist(arma::rowvec vec, arma::rowvec centroid);
RcppExport SEXP ClusterR_kmeans_pp_dist(SEXP vecSEXP, SEXP centroidSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::rowvec >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type centroid(centroidSEXP);
    __result = Rcpp::wrap(kmeans_pp_dist(vec, centroid));
    return __result;
END_RCPP
}
// kmeans_pp_init
arma::mat kmeans_pp_init(arma::mat& data, unsigned int clusters, bool medoids);
RcppExport SEXP ClusterR_kmeans_pp_init(SEXP dataSEXP, SEXP clustersSEXP, SEXP medoidsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type clusters(clustersSEXP);
    Rcpp::traits::input_parameter< bool >::type medoids(medoidsSEXP);
    __result = Rcpp::wrap(kmeans_pp_init(data, clusters, medoids));
    return __result;
END_RCPP
}
// norm_fuzzy
arma::rowvec norm_fuzzy(arma::rowvec vec, double eps);
RcppExport SEXP ClusterR_norm_fuzzy(SEXP vecSEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::rowvec >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    __result = Rcpp::wrap(norm_fuzzy(vec, eps));
    return __result;
END_RCPP
}
// quantile_value
Rcpp::NumericVector quantile_value(arma::rowvec x, int clusters);
RcppExport SEXP ClusterR_quantile_value(SEXP xSEXP, SEXP clustersSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::rowvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type clusters(clustersSEXP);
    __result = Rcpp::wrap(quantile_value(x, clusters));
    return __result;
END_RCPP
}
// quantile_init_rcpp
arma::mat quantile_init_rcpp(arma::mat data, int sample_rows, unsigned int clusters, bool medoids);
RcppExport SEXP ClusterR_quantile_init_rcpp(SEXP dataSEXP, SEXP sample_rowsSEXP, SEXP clustersSEXP, SEXP medoidsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type sample_rows(sample_rowsSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type clusters(clustersSEXP);
    Rcpp::traits::input_parameter< bool >::type medoids(medoidsSEXP);
    __result = Rcpp::wrap(quantile_init_rcpp(data, sample_rows, clusters, medoids));
    return __result;
END_RCPP
}
// check_medoids
arma::mat check_medoids(arma::mat data, unsigned int clust, double tol, bool medoids);
RcppExport SEXP ClusterR_check_medoids(SEXP dataSEXP, SEXP clustSEXP, SEXP tolSEXP, SEXP medoidsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type data(dataSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type clust(clustSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< bool >::type medoids(medoidsSEXP);
    __result = Rcpp::wrap(check_medoids(data, clust, tol, medoids));
    return __result;
END_RCPP
}
// SCALE
arma::mat SCALE(arma::mat data, bool mean_center, bool sd_scale);
RcppExport SEXP ClusterR_SCALE(SEXP dataSEXP, SEXP mean_centerSEXP, SEXP sd_scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type data(dataSEXP);
    Rcpp::traits::input_parameter< bool >::type mean_center(mean_centerSEXP);
    Rcpp::traits::input_parameter< bool >::type sd_scale(sd_scaleSEXP);
    __result = Rcpp::wrap(SCALE(data, mean_center, sd_scale));
    return __result;
END_RCPP
}
